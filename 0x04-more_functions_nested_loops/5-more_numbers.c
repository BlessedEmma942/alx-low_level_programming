#include "main.h"

/**
 * more_numbers - Prints the nubers 0 to 14 ten times
 * Return: 0 - 14 ten times
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
		}
	_putchar('\n');
	}
}
