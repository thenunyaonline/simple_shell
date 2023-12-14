#include "shell.h"

/**
 * _strdup - function duplicates string
 * @str: string to be duplicated
 * Return: pointer
 */

char *_strdup(const char *str)
{
	char *ptr;
	int j, len = 0;

	if (str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		len++;
		str++;
	}
	str = str - len;
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j <= len; j++)
		ptr[j] = str[j];
	return (ptr);
}


/**
 * _strcmp - function compares strings
 * @s1: string 1
 * @s2: string 2
 * Return: void
 */

int _strcmp(char *s1, char *s2)
{
	int cmp;

	cmp = (int)*s1 - (int)*s2;
	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
		cmp = (int)*s1 - (int)*s2;
	}
	return (cmp);
}


/**
 * _strcat - function conctenates strings
 * @dest: destination string
 * @src: source string
 * Return: destination
 */

char *_strcat(char *dest, char *src)
{
	char *d = dest;

	while (*d)
		d++;

	while (*src)
	{
		*d = *src;
		d++;
		src++;
	}
	*d = *src;
	return (dest);
}
