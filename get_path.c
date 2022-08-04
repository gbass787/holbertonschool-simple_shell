#include "main.h"
/**
 * getDir - function parses through path array, opens all directories,
 * and checks if files exist
 *
 * @patharray: array of directories in the path
 * @commandLineArgs: user input
 *
 * Return: directory containing the binary
 */

char *getDir(char **patharray, char **commandlineArgs)
{
	DIR *directory = NULL;
	struct dirent *binaryFiles = NULL;
	int count;

	for (count = 0; patharray[count] != NULL; count++)
	{
		directory = opendir(patharray[count]);
		if (directory == NULL)
			return (NULL);

		while ((binaryFiles = readdir(directory)) != NULL)
		{
			if (_strcmp(binaryFiles->d_name, commandlineArgs[0]) == 0)
			{
				closedir(directory);
				return (patharray[count]);
			}
		}
		closedir(directory);
	}

	return (NULL);
}
/*
int main(void)
{
	char *str[]= {};
	char *command[]= {"ls"};
	char *path;
	str = get_path(**env);
	path = getDir(str, command);
	printf("str[%s]", str);
	printf("command[%s]", command);
	printf("path[%s]", path);	
	return(0);
}
*/
