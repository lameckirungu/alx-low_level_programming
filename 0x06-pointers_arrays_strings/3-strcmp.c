#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: An int indicating whether one of the string is less, more or equal
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, rem = 0;
	int tes;

	while (s1[a])
	{
		a++;
	}
	while (s2[b])
	{
		b++;
	}

	if (a <= b)
	{
		tes = a;
	}
	else
	{
		tes = b;
	}
	while (c <= tes)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			rem = s1[c] - s2[c];
			break;
		}

		c++;
	}

	return (rem);
}


