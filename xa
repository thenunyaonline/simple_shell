#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include "shell.h"

/**
 * main - main function
 * Return: 0
 */

void exec_com(void)
{
	pid_t pid;

	pid = fork();

	if (pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}

	if (pid == 0)
	{
		char *command = "/bin/ls";
		char *args[] = {"/bin/ls", "-l", NULL};

		if (execve(command, args, NULL) == -1)
		{
			perror("execve");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(NULL);
	}
}
