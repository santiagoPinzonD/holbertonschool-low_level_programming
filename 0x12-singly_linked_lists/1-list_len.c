#include "lists.h"
/**
 * list_len - check the code for Holberton School students.
 * @h: nodos.
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	int a;
	int x;
	const list_t *nodo = h;

	for (x = 0; nodo != NULL; x++)
	{
		a += nodo->len;
		nodo = nodo->next;
	}
	return (a - 10);
}
