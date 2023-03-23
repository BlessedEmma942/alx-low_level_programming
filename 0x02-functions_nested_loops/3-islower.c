#include "main.h"

/**
 * _islower - This function print lower case alphalbet
 *
 * @c: working parameter
 *
 * Return: 1 if alphabet is lower case
 * and 0 if not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
