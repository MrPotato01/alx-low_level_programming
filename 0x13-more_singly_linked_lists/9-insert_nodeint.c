#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert node in index
 * @head: struct linked list
 * @idx: index where insert node
 * @n: data of struct list
 * Return: adrress of the next node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m = 0;
	listint_t *newNode;
	listint_t *tmp;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	tmp = *head;
	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	for (m = 0; tmp && m < idx; m++)
	{
		if (m == idx - 1)
		{
			newNode->next = tmp->next;
			tmp->next = newNode;
			return (newNode);
		}
		else
		{
			tmp = tmp->next;
		}
	}
	return (NULL);
}
