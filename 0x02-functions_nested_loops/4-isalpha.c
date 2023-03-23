#include "main.h"

/**
 * _isalpha - This function checks for all cases of alphabet
 *
 * @c: working parameter
 *
 * Return: 1 if alphabet and 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
