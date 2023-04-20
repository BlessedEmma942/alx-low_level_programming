#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - this function prints a name
 * @name: the string to add
 * @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}