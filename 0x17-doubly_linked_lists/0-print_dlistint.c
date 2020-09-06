#include "lists.h"

/**
 * print_dlistint - check the code for Holberton School students.
 * @h: pointer head
 * Return: x.
 */
size_t print_dlistint(const dlistint_t *h)
{

	int x;
	const dlistint_t *nodo = h;

	for (x = 0; nodo != NULL; x++)
	{
		printf("%d\n", nodo->n);
		nodo = nodo->next;
	}
	return (x);
}
