#include "lists.h"

/**
* add_dnodeint - check the code for Holberton School students.
* @n: nodos
* @head: puntero al primer nodo.
* Return: Always 0.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	if (!(*head))
	{
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
