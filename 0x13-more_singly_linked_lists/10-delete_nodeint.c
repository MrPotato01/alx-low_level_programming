#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete a nade
 * @head: struct list
 * @index: index struct
 *
 * Return: integer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *newNode;
	listint_t *tmp;

	if (!*head)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		newNode = (*head)->next;
		free(*head);
		*head = newNode;
		return (1);
	}
	while (i < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		newNode = tmp;
		tmp = tmp->next;
		i++;
	}

	newNode = tmp->next;
	tmp->next = newNode->next;

	free(newNode);
	return (1);
}
