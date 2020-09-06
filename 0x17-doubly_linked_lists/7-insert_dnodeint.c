#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position..
 * @h:pointer value.
 * @idx: unsigned int value.
 * @n: int value
 * Return: node address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nodo, *tmp = *h;
	unsigned int i = 0;

	nodo = malloc(sizeof(dlistint_t));
	if (!nodo)
		return (NULL);
	nodo->n = n;
	if (idx == 0)
	{
		nodo->next = tmp;
		*h = nodo;
		return (nodo);
	}
	while (i < (idx - 1))
	{
		if (!tmp)
		{
			free(nodo);
			return (NULL);
		}
		i++;
		tmp = tmp->next;
	}
	nodo->next = tmp->next;
	tmp->next = nodo;
	return (nodo);
}
