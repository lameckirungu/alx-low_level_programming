#include "main.h"

/**
 * _strlen - checks the length of the string
 * @s: The sring to count
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}

	return (i);
}
