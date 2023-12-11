#include "shell.h"

/**
 * eg_prints - function prints string
 * @instruct: string to be printed
 * Return: void
 */

void eg_prints(const char *instruct)
{
	write(STDOUT_FILENO, instruct, strlen(instruct));
}
