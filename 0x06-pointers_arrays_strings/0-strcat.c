#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest - The destination string
 * @src - The source string
 *
 * Return: Returns a pointer to the string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != 0; i++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
