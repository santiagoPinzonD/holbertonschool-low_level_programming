#include "lists.h"

/**
* add_dnodeint_end - check the code for Holberton School students.
* @n: nodos
* @head: puntero al primer nodo.
* Return: Always 0.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *actual = *head;
	int x = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if ((*head) == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}
	for (x = 0; actual->next != NULL; x++)
	{
		actual = actual->next;
	}
	actual->next = new;
	new->prev = actual;
	return (new);
}
