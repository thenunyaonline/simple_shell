#include "shell.h"

/**
 * legilimens_com - function accepts user input
 * @instruct: user input
 * @size: size of string
 * Return: void
 */

void legilimens_com(char *instruct, size_t size)
{
	if (fgets(instruct, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			eg_prints("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			eg_prints("Error while reading input.\n");
			exit(EXIT_FAILURE);
		}
	}
		instruct[strcspn(instruct, "\n")] = '\0';
}
