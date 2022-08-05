#include "main.h"

/**
*split_line- split string in to tokens
*lineptr: input
*Return: str, needs to be free
*/

char **split_line(char *lineptr)
{
	int num = 0;
	int capacity =  25;
	char **str = malloc(capacity * sizeof(char *));

	char *delim = " \n\t\r:";

	str[num] = strtok(lineptr, delim);

	while (str[num] != NULL)
	{
		num++;
		str[num] = strtok(NULL, delim);
	}

	return (str);
}

/*
int main (void)
{
	char lineptr[] = "/bin/ls -l two:t three \n";
	char **str;

	str = split_line(lineptr);

	int n = 0;
	while ( str[n] != NULL)
	{
	printf("str [%d] = %s\n", n, str[n]);
	n++;
	}
	return (1);
}
*/
