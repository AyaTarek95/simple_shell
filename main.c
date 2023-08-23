#include "main.h"
/**
 * main - main function
 * @ac : arg no
 * @av: arguments
 * Return: always 0
 */
int main(int __attribute__((unused))ac, char __attribute__((unused))*av[])
{
	char *line = NULL;
	char **cmd = NULL;
	int k, status = 0;
	

	while (1)
	{
		line = get_line();
/*ctr+d*/	if (line == NULL)
		{
			if (isatty(STDIN_FILENO) == 1)
				write(STDOUT_FILENO, "\n", 1);
			
			return(status);
		}


		cmd = tknzer(line);
		if (!cmd)
			continue;
		
		for (k = 0; cmd[k]; k++)
			printf("%s\n", cmd[k]);

	/**	status = execve(cmd, argv);*/
	}
	return (0);
}
