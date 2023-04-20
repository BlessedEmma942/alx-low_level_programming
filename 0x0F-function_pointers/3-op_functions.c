#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);


/**
 * op_add - function returns the total of two added numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The total of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function returns the difference between two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The difference between a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function returns the answer of two multiplied  numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The answer of a(times) b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the answer after division between two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The result of division btw a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the remainder after division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder after division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

