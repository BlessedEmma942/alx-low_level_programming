#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a targeted index in a list
 * @head: first node in the list
 * @index: index of the node
 *
 * Return: pointer to the node targeted, or NULL if node doesn't exit
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *temp = head;

	while (temp && n < index)
	{
	temp = temp->next;
	n++;
	}
	return (temp ? temp : NULL);
}
