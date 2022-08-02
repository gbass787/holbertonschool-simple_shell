#include "main.h"

int main(int ac, char **av, char **env)
{
	char *lineptr = NULL;
	size_t n = 0;
	char **str;
	
	(void)env;
	(void)ac;
	(void)av;
	(void)str;

	do{

	printf("$");

	getline(&lineptr, &n, stdin);

	str = split_line(lineptr);

	}while (1);

	return (1);
}
