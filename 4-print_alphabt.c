#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 if successful
 *
 */

int main(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
		if (a != 'q' && a != 'e')
			putchar(a);
	putchar('\n');
	return (0);

}
