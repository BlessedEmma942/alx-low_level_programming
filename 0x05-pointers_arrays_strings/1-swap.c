#include "main.h"

/**
 * swap_int - function swaps two values
 * @a: first value
 * @b: second value
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
