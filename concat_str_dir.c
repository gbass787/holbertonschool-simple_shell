#include "main.h"

/**
 * concat_str_dir - concat token and value
 * @array: token
 * @val: value
 * Return: new string
 */

char *concat_str_dir(char *array, char *command)
{
	char *new;
	char *final;

	new = strcat(array, "/");
	final = strcat(new, command);

	return (final);
}

/*
int main(void)
{
	char array[] = "/usr";
	char command[] = "ls";
	char *new;

	new = concat_str_dir(array, command);

	printf("array[%s]", array);
	printf("command[%s]", command);
	printf("new[%s]", new);

	return (0);
}
*/
