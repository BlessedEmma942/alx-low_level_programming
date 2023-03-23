#include "main.h"

/**
 * print_last_digit - this function print last digit
 *
 * @a: working parameter
 *
 * Return: b if successful
 */

int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (a < 0)
		b = -b;
	_putchar(b + '0');
	return (b);
}
