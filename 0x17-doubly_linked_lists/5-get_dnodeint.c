#include "lists.h"

/**
* get_dnodeint_at_index - check the code for Holberton School students.
* @head: puntero al primer nodo
* @index: position.
* Return: Always 0.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *aux;

	if (head)
	{
		aux = head;
		for (i = 0; i < index; i++)
		{
			if (aux == NULL)
			{
				return (NULL);
			}
			aux = aux->next;
		}
		return (aux);
	}
	return (NULL);
}
