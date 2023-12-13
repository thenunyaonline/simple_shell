#include "shell.h"
#include "exec.h"

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
		token_com(instruct);
		exec_com();
	}

	return (0);
}
