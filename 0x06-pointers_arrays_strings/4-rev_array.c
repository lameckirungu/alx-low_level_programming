#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: An array of integers
 * @n: Number of elements to swap
 *
 * Return: empty
 */
void reverse_array(int *a, int n)
{
	int *p, i, tes, k;

	p = a;

	for (i = 1; i < n; i++)
	{
		p++;
	}
	for (k = 0; k < i / 2; k++)
	{
		tes = a[k];
		a[k] = *p;
		*p = tes;
		p--;
	}
}

