#include "lists.h"

/**
 * reverse_listint - function reverses a (listint_t)linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *backward = NULL;
	listint_t *forward = NULL;

	while (*head)
	{
		forward = (*head)->next;
		(*head)->next = backward;
		backward = *head;
		*head = forward;
	}
	*head = backward;
	return (*head);
}

