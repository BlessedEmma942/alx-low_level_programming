#include "lists.h"

/**
 * free_listint2 - function frees a list(listint_t)
 * @head: pointer to  list(listint_t) that is being freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
	temp = (*head)->next;
	free(*head);
	*head = temp;
	}
	*head = NULL;
}