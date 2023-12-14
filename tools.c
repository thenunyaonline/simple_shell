#include "shell.h"

/**
 * freearray2D - function frees array
 * @arr: array to be freed
 * Return: void
 */

void freearray2D(char **arr)
{
	int i;

	if (!arr)
		return;

	for (i = 0; arr[i]; i++)
	{
		free(arr[i]);
		arr[i] = NULL;
	}

	free(arr), arr = NULL;
}
