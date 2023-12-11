#include "shell.h"

/**
 * _strlen - counts number of characters
 * @str: string
 * Return: count
 */

int _strlen(char *str)
{
	int i;
	int count = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		count++;
	return (count);
}
