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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
