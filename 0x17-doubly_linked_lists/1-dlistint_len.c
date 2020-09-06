#include "lists.h"

/**
 * dlistint_len - check the code for Holberton School students.
 * @h: pointer head
 * Return: x.
 */
size_t dlistint_len(const dlistint_t *h)
{

	int x;
	const dlistint_t *nodo = h;

	for (x = 0; nodo != NULL; x++)
	{
		nodo = nodo->next;
	}
	return (x);
}
