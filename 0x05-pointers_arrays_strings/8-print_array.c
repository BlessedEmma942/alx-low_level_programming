#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array of intergers
 *
 * @a: array of int
 * @n: num of array to print
 * Return: 0
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
	printf("%d", a[b]);
	if (b != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
