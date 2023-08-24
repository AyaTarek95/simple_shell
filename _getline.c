#include "main.h"
/**
 * get_line - reads input
 * Return: always 0
 */
char *get_line()
{
	char *line = NULL;
	size_t len = 0;
	ssize_t n;

	if (isatty(STDIN_FILENO) == 1)
		write(STDOUT_FILENO, "$ ", 2);

	n = getline(&line, &len, stdin);
		if (n == -1)
		{
			free(line);
			return (NULL);
		}



return (line);
}
