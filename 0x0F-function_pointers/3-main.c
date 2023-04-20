#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - function prints the result of basic maths operations.
 * @argc: number of arguments provided for the program.
 * @argv: array of pointers to args.
 *
 * Return: Always 0 (If Successful).
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int number1, number2;
	char *op;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}


	number1 = atoi(argv[1]);
	op = argv[2];
	number2 = atoi(argv[3]);


	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}


	if ((*op == '/' && number2 == 0) || (*op == '%' && number2 == 0))
	{
		printf("Error\n");
		exit(100);
	}


	printf("%d\n", get_op_func(op)(number1, number2));


	return (0);
}

