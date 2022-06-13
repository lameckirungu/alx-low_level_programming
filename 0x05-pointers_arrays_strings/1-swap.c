#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: An integer to swap
 * @b: Another int to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int num;
	/*value of a is assigned to num*/
	num = *a;
	/*value of b is assigned to a*/
	*a = *b;
	/*value of b is assigned to num*/
	*b = num;
}
