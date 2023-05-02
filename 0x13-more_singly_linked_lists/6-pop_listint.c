 #include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete the header node
 * @head: struct list
 *
 * Return: header node n
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL || head == NULL)
		return (0);

	if (*head)
	{
		n = (*head)->n;
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	return (n);
}
