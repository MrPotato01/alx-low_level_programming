#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add a node
 *
 * @head: struct head
 * @n: number n
 * Return: address of next element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
