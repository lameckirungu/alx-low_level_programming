#include "main.h"


/**
 * print_numbers - printing single digits 0 to 9
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = '0'; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
