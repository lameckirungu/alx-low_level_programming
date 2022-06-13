#include "main.h"

/**
 * _puts - prints a string to the screen
 * @str: The string to be output to the stdout
 *
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
