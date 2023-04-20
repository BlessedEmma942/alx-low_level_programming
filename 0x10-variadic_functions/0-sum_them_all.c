#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - this function returns the sum of all its paramters.
 * @n: Number of paramters to be passed to the function.
 * @...: variable of the parameter the sum is calculated
 *
 * Return: If n == 0 - 0. Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a, sum = 0;


	va_start(ap, n);

	for (a = 0; a < n; a++)
		sum += va_arg(ap, int);


	va_end(ap);
	return (sum);
}
