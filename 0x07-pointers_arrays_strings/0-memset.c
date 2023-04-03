#include "main.h"

/**
 * char *_memset - fills memory with a constant byte.
 * @s: destination pointer
 * @b: source pointer
 * @n: number of bytes
 * Return: returns destination pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int j = 0;
	int k = n;

	for (i = 0;  i < k; i++)
	{
		s[i] = b;
		j++;
	}
	return (s);
}
