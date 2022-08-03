#include "main.h"
/**
 * get_path - function finds the PATH value of the enviroment
 *
 * @env: variable that contains enviroment variables
 *
 * Return: array of the files in the PATH
 */

char **get_path(char **env)
{
	char **patharray, *temp, *hold, *path = "PATH=";
	const char *colon = ": =";
	int count, count2, inputSize = 20, sizearray = 0;

	patharray = malloc(inputSize * sizeof(char *));
	if (patharray == NULL)
	{
		exit(99);
	}

	for (count = 0; env[count] != NULL; count++)
	{
		for (count2 = 0; count2 < 5; count2++)
		{
			if (path[count2] != env[count][count2])
			{
				break;
			}
		}
		if (count2 == 5)
		{
			break;
		}
	}
	hold = _strdup(env[count]);
	temp = strtok(hold, colon);
	temp = strtok(NULL, colon);

	count = 0;
	while (temp != NULL)
	{
		patharray[count] = _strdup(temp);
		count++;
		sizearray++;
		temp = strtok(NULL, colon);
	}
	patharray[count] = NULL;
	free(hold);

	return (patharray);
}

/**
 * _strdup - function duplicates a string
 *
 * @str: string to be copied
 *
 * Return: copied string
 */
char *_strdup(char *str)
{
	char *copiedString;
	int count = 0, arrayLength = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (count = 0; str[count] != '\0'; count++)
	{
		arrayLength++;
	}

	copiedString = malloc(sizeof(char) * (arrayLength + 1));

	if (copiedString == NULL)
	{
		return (NULL);
	}

	for (count = 0; str[count] != '\0'; count++)
	{
		copiedString[count] = str[count];
	}
	copiedString[count] = '\0';

	return (copiedString);
}


