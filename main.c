#include "main.h"
/**
 * main - main function
 * @ac : arg no
 * @av: arguments
 * Return: always 0
 */
int main(int __attribute__((unused))ac, char *av[])
{
	char *line = NULL;
	char **cmd = NULL;
	int status = 0;


	while (1)
	{
		line = get_line();
		if (line == NULL)
		{
			if (isatty(STDIN_FILENO) == 1)
				write(STDOUT_FILENO, "\n", 1);

			return (status);
		}


		cmd = tknzer(line);
		if (!cmd)
			continue;


	status = exec_ute(cmd, av);

	}
	return (0);
}
