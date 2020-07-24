#include "lists.h"

/**
 * list_len - check the code for Holberton School students.
 * @h: nodos.
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	unsigned int x;
	const list_t *nodo = h;

	for (x = 0; nodo != NULL; x++)
	{
		nodo = nodo->next;
	}
	return (x);
}
