#include "main.h"

/**
 * _strcmp - compares str
 * @s1: str 1
 * @s2: str 2
 * Return: neg, pos or 0 if s1 is lower, biger o match s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (i = 0; s1[i] || s2[i]; i++)
		if (s1[i] != s2[i])
		{
		return (s1[i] - s2[i]);
		}
	return (0);
}

/**
 * _strcat - concatenates two strings
 * @dest: str dest
 * @src: str source
 * Return: pointer to concatenated str
 */

char *_strcat(char *dest, char *src)
{
	int i = _strlen(dest);
	int j = 0;

	while (src[j])
		dest[i++] = src[j++];
	dest[i] = src[j];
	return (dest);
}
