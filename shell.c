#include "main.h"

int main(int ac, char **av, char **env)
{
	char *lineptr = NULL;
	size_t n = 0;
	char **str;
	
	(void)env;
	(void)ac;
	(void)av;

	printf("$");

	getline(&lineptr, &n, stdin);
	printf("lineptr, %s\n", lineptr);

	str = split_line(lineptr);


	return (1);
}
