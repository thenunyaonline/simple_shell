#include "shell.h"

/**
 * legilimens_line - function reads commands from user
 * Return: void
 */

char *legilimens_line(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t l;

	if (isatty(STDIN_FILENO))
	write(STDOUT_FILENO, "elg$ ", 5);
	l = getline(&line, &len, stdin);
	if (l == -1)
	{
		free(line);
		return (NULL);
	}

	return (line);
}
