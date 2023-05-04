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
	listint_t *temp, *current;
	unsigned int n;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
		return (1);
	}
	temp = *head;
	for (n = 0; n < index - 1; n++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}

