#include "shell.h"

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	char instruct[70];

	while (1)
	{
		aparecium_display();
		legilimens_com(instruct, sizeof(instruct));
		execs_com(instruct);
	}

	return (0);
}
