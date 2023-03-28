#include "main.h"
/**
 * puts_half - prints half of string
 * @str: working parameter
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int a;
	int length = 0;

	while (str[length] != '\0')
		length++;
	if (length % 2 == 1)
	{
		a = (length - 1) / 2;
			a += 1;
	}
	else
	{
	a = length / 2;
	}
	for (; a < length; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
