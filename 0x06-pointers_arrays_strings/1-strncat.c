#include "main.h"

/**
 * _strncat - Fuction conc.two strings
 * @dest: input
 * @src: input
 * @n: input
 * use n bytes from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] =  src[index];
	return (dest);


}
