#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a list(listint_t),
 * at a targeted index
 * @head: pointer to the first element in the list
 * @index: index of the node to be deleted
 *
 * Return: 1 (If Successful), or -1 (If it Failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *present_n = NULL;
	unsigned int n = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (n < index - 10)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		n++;
	}
	present_n = temp->next;
	temp->next = present_n->next;
	free(present_n);

	return (1);
}

