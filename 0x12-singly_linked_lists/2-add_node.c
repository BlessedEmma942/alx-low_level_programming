#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list (list_t)
 * @head: double pointer to the list (list_t)
 * @str: a new string to be added in the node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int num = 0;

	while (str[num])
		num++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = num;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
