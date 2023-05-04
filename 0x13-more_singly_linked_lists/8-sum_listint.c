#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a list(listint_t)
 * @head: first node in the list
 *
 * Return: total after addition, or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
	sum += temp->n;
	temp = temp->next;
	}
	return (sum);
}
