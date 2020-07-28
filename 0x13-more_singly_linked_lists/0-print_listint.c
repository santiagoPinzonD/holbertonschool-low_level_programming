#include "lists.h"

/**
 * print_listint - print all the elements..
 * @h: nodos.
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
	int i;
	const listint_t *nodo = h;

	for (i = 0; nodo != NULL; i++)
	{
		printf("%d\n", nodo->n);
		nodo = nodo->next;
	}

	return (i);
}
