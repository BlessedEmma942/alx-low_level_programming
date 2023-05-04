#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list(listint_t)
 * @head: pointer to the first node in the linked list
 * @n: data added to new node
 *
 * Return: the address of the new element, NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	new_n = malloc(sizeof(listint_t));
	if (!new_n)
		return (NULL);

	new_n->n = n;
	new_n->next = *head;
	*head = new_n;

	return (new_n);
}
