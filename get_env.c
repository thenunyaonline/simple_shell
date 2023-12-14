#include "shell.h"

/**
 * _getenv - function gets environmwnt variable
 * @var: parameter 1
 * Return: 0
 */

char *_getenv(char *var)
{
	int a;
	char *tmp, *key, *value, *env;

	for (a = 0; environ[a]; a++)
	{
		tmp = _strdup(environ[a]);
		key = strtok(tmp, "=");
		if (_strcmp(key, var) == 0)
		{
			value = strtok(NULL, "\n");
			free(tmp);
			env = _strdup(value);
			return (env);
		}
		free(tmp), tmp = NULL;
	}
	return (NULL);
}
