#include "main.h"
/**
 *
 *
 */
int exec_ute(char **cmd, char **av)
{
	int status;
	pid_t child;

	child = fork();
	if (child == 0)
	{
		if (execve(cmd[0], cmd, environ) == -1)
		{
			perror(av[0]);
			free_str_arr(cmd);
			exit(127);
		}
	free_str_arr(cmd);
	}
	else
	{
		waitpid(child, &status, 0);
		free_str_arr(cmd);

	}
	return (WEXITSTATUS(status));
}
