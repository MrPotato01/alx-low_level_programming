#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get a special node
 *
 * @head: head node
 * @index: index determine a node
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* listint_t *new; */
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
		{
			return (head);
		}

		i++;
		head = head->next;
	}
	return (NULL);
}
