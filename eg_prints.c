#include "shell.h"

/**
 * eg_prints - function prints string
 * @instruct: string to be printed
 * Return: void
 */

void eg_prints(const char *info)
{
	write(STDOUT_FILENO, info, strlen(info));
}
