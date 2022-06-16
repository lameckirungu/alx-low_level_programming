#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * @n:  uses n bytes from source
 *
 * Return: returns a pointer to the dest string after concatenating
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, j = 0;

	while (dest[dest_len])
	{
		dest_len++;
	}

	while (j < n && src[j])
	{
		dest[dest_len] = src[j];
		dest_len++;
		j++;
	}

	dest[dest_len + n + 1] = '\0';

	return (dest);
}

