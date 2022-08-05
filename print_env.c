#include "main.h"
/**
 * print_env - function that print the cuurent environment
 */
void print_env(void)
{
	size_t c;
	int len;

	for (c = 0; environ[c] != NULL; c++)
	{
		len = strlen(environ[c]);
		write(1, environ[c], len);
		write(STDOUT_FILENO, "\n", 1);
	}

}
