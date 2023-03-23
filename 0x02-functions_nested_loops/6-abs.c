#include "main.h"

/**
 * _abs - This fuction checks for aboslute value
 *
 * @a: working parameter
 *
 * Return: a if successful
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
