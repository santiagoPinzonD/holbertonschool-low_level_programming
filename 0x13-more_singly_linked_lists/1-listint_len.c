#include "lists.h"

/**
 * listint_len - check the code for Holberton School students.
 * @h: nodos.
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
	int x;
	const listint_t *nodo = h;

	for (x = 0; nodo != NULL; x++)
	{
		nodo = nodo->next;
	}
	return (x);
}
