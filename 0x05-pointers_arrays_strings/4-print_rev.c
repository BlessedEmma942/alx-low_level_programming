#include "main.h"

/**
 * print_rev - prints the reverse version of string
 * @s: working parameter
 * Return: 0
 */

void print_rev(char *s)
{
	int a;
	int count = 0;

	for (a = 0; s[a] != '\0'; a++)
		count++;
	for (a = count ; a >= 0 ; a--)
		_putchar(s[a]);
	_putchar('\n');
}
