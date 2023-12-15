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
	int status = 0, idx = 0;
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

		idx++;
		command = tokenizar(line);
		if (!command)
			continue;

		if (_builtin(command[0]))
			handles_builtin(command, argv, status, idx);
		else

		status = _execute(command, argv, idx);
	}
}
