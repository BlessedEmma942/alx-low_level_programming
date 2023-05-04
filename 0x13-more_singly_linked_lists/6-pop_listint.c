#include "lists.h"

/**
 * pop_listint - function deletes the head node of a list(listint_t)
 * @head: pointer to the first element in the  list
 *
 * Return: the head node's data, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (number);
}
