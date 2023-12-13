#include "shell.h"

/**
 * execs_com - executes command
 * @instruct: command function
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


#include "shell.h"

void token_com(const char *instruct)
{
	pid_t child_pid = fork();

        if (child_pid == -1)
	{
		eg_prints("Error forking process.\n");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		char *args[100];
                int arg_count = 0;

                char *token = strtok((char *)instruct, " ");
                while (token != NULL)
                {
                        args[arg_count++] = token;
                        token = strtok(NULL, " ");
                }
                args[arg_count] = NULL;

                execvp(args[0], args);

		eg_prints("Error executing command.\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
