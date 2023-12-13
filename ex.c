#include "shell.h"

/**
 * exec_com - executes command
 * @instruct: command function
 * Return: void
 */

void exec_com(const char *instruct)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
	       char *args[] = { (char *)instruct, NULL };

		if (execve(instruct, args, NULL) == -1)
		{
			perror("execve");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(NULL);
	}
{
	execs_com("/bin/ls");
	return (0);
}
