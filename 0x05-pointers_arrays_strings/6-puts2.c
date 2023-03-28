#include "main.h"
/**
 * puts2 - print  strings
 * @str: working parameter
 * Return: 0
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
