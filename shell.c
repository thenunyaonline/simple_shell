#include "shell.h"

/**
 * main - main simple shell funcion
 * @agc: argument count
 * @argv: arguments
 * Return: 0
 */

int main(int agc, char **argv)
{
	char *line = NULL, **command = NULL;
	int status = 0;
	(void) agc;
	(void) argv;

	while (1)
	{
		line = legilimens_line();
		if (line == NULL)
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			return (status);
		}


		command = tokenizar(line);
		if (!command)
			continue;

		status = _execute(command, argv);
	}
}
