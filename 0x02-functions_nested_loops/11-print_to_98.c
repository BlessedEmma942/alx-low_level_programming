#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - this function print netural numbers
 *
 * @n: working pararmeter
 *
 * Return: always 0
 */

void print_to_98(int n)
{
	int a;

	if (n >= 0 &&  n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			printf("%d, ", a);
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (a = n; a <= 98; a++)
		{
			printf("%d, ", a);
		}
		printf("\n");

	}
	else if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			printf("%d, ", a);
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d, ", n);

}
