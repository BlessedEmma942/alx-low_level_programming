#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked(listint_t) lists
 * @h: linked list(listint_t) that is traversed
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}
