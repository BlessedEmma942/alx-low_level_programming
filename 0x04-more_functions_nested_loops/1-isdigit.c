#include "main.h"

/**
 * _isdigit - check if it is a digit
 *
 * @x: working parameter
 *
 * Return: 1 if digit and 0 if otherwise
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
