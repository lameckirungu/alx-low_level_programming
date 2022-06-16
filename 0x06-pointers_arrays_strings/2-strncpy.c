#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies the string src to dest
 * @dest - where the string is being copied to
 * @src - The string being copied
 *
 * Return: The dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[b])
	{
		b++;
	}

	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
