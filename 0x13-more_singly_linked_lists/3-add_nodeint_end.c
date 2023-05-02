#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add node at the end
 * @head: strucut head
 * @n: number inserted
 *
 * Return: next address
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *current;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}

	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = newNode;
	return (newNode);
}
