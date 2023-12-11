#include "shell.h"

/**
 * execs_com - function executes user input
 * @instruct: string
 * Return: void
 */

void execs_com(const char *instruct)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		execlp(instruct, instruct, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
