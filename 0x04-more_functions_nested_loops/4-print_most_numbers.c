#include "main.h"

/**
 * print_most_numbers - print the numbers 0 to 9
 *
 * Description: exclude the number 2 and 4
 * Return: the number 0 to 9
 */

void print_most_numbers(void)
{
	int a = 0;

	for (; a <= 9; a++)
	{
	if (a == 2 || a == 4)
	{
	continue;
	}
	else
	{
	_putchar(a + '0');
	}
	}
	_putchar('\n');
}
