#include "lists.h"

/**
 * free_listint - function frees a  list(listint_t)
 * @head: listint_t list that is freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
