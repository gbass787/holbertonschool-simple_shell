#include "main.h"
/**
 * get_env - prints environment
 *
 * @envp: environment variable
 *
 * Return: void
 */

int get_env(char *envp[])
{
	int x, y;

	for (x = 0; envp[x] != NULL; x++)
	{
		y = _strlen(envp[x]);
		write(1, envp[x], y);
		_putchar('\n');
	}
	return (0);
}
