#include "main.h"
/**
 * tknzer - tokenize line
 * @line: string passed
 * Return: alway 0
 */
char **tknzer(char *line)
{
	char *token, *linecpy = NULL;
	char **cmd = NULL;
	int c = 0, i = 0;

	if (!line)
		return (NULL);

	linecpy = _strdup(line);
	token = strtok(linecpy, DELIM);
	if (token == NULL)
	{
		free(line), line = NULL;
		free(linecpy), linecpy = NULL;
		return (NULL);
	}
	while (token)
	{
	c++;
	token = strtok(NULL, DELIM);
	}
	free(linecpy), linecpy = NULL;
	cmd = malloc(sizeof(char *) * (c + 1));
	if (!cmd)
	{
		free(line), line = NULL;
		return (NULL);
	}

	token = strtok(line, DELIM);
	while (token)
	{
		cmd[i] = _strdup(token);
		token = strtok(NULL, DELIM);
		i++;
	}
	free(line), line = NULL;
	free(token), token = NULL;
	cmd[i] = NULL;
	return (cmd);
}
