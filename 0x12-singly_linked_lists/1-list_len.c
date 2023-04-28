#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked (list_t) list
 * @h: pointer to list (list_t)
 *
 * Return: number of elements(h)
 */
size_t list_len(const list_t *h)
{
	size_t b = 0;

	while (h)
	{
		b++;
		h = h->next;
	}
	return (b);
}
