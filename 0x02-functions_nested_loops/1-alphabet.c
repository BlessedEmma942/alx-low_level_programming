#include "main.h"

/**
 * print_alphabet - This function prints all letters in lower case
 *
 * Return: 0 if successful;
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
		_putchar(a);
	_putchar('\n');
}
