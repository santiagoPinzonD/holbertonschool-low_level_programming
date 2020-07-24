#include "lists.h"
/**
 * print_list - check the code for Holberton School students.
 * @h: nodos.
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	int x;
	const list_t *nodo = h;

	for (x = 0; nodo != NULL; x++)
	{
		if (nodo->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", nodo->len, nodo->str);
		}
		nodo = nodo->next;
	}
	return (x);
}
