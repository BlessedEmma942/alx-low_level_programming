#include "main.h"
#include <stdio.h>


/**
 * print_rev - prints the reverse version of string
 * @s: working parameter
 * Return: 0
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;
	for (a -= 1 ; a >= 0 ; a--)
		_putchar(s[a]);
	_putchar('\n');
}
