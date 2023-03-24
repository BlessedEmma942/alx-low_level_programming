#include "main.h"

/**
 * _isupper - check if a letter is uppercase.
 * @x: working parameter
 *
 * Return: 1 if upper otherwise 0
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
