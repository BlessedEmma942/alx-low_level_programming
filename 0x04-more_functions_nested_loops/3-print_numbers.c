#include "main.h"

/**
 * print_numbers - prints from 0 to 9
 *
 * Return: the numbers
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
	}
	_putchar('\n')
}