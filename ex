#include "shell.h"

/**
 * execs_com - executes command
 * @instruct: command function
 * Return: void
 */

int execi(void)
{
	pid_t child_pid = fork();
	int i, status;
	array = NULL;
	
	if (child_pid == -1)
	{
		perror("fork");
	}

	if (child_pid == 0)
	{
		if (execve(array[0], array, NULL) == -1)
		perror("No such file or directory");
		
	}
	else
	{
		wait(&status);
	}
}
