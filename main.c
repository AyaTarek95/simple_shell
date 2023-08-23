#include "main.h"
/**
 *
 *
 */
int main(int __attribute__((unused))ac, char __attribute__((unused))*av[])
{
	char *line = NULL;
	/**char **cmd = NULL;*/
	int status = 0;
	

	while (1)
	{
		line = get_line();
	/*ctr+d*/	if (line == NULL)
			return(status);
		/*Test*/ printf("%s", line);
	/**	cmd = tokenizer(line);
		status = execve(cmd, argv);*/
	}
	return (0);
}
