#include "lists.h"

/**
 * add_nodeint_end - function adds a node at the end of a list(listint_t)
 * @head: pointer to the first element in the list
 * @n: data added to new element
 *
 * Return: the address of the new element, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n;
	listint_t *temp = *head;

	new_n = malloc(sizeof(listint_t));
	if (!new_n)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;

	if (*head == NULL)
	{
		*head = new_n;
		return (new_n);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_n;

	return (new_n);
}
