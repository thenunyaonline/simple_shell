#include "shell.h"

/**
 * _builtin - function takes in certain command
 * @command: user input
 * Return: 0
 */

int _builtin(char *command)
{
	char *builtins[] = {"exit", "env", "setenv", "cd", NULL};
	int i;

	for (i = 0; builtins[i]; i++)
	{
		if (_strcmp(command, builtins[i]) == 0)
			return (1);
	}
	return (0);
}

/**
 * handles_builtin - function handles commands
 * @command: user input
 * @argv: argument vector
 * @status: status
 * @idx: index
 * Return: 0
 */

void handles_builtin(char **command, char **argv, int status, int idx)
{
	(void) argv;
	(void) idx;

	if (_strcmp(command[0], "exit") == 0)
		exit_shell(command, status);

	else if (_strcmp(command[0], "env") == 0)
		print_env(command, status);
}

/**
 * exit_shell - function exits shell
 * @command: user input
 * @status: status
 * Return: 0
 */

void exit_shell(char **command, int status)
{
	freearray2D(command);
	exit(status);
}

/**
 * print_env - function prints environment
 * @command: user input
 * @status: status
 * Return: 0
 */

void print_env(char **command, int status)
{
	int i;
	(void) status;

	for (i = 0; environ[i]; i++)
	{
		write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
	}
	freearray2D(command);
}
