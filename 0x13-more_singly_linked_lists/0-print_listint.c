#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the element
 * @h: structure of listint_t
 *
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}

	return (n);
}
