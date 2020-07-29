#include "lists.h"

/**
 * get_nodeint_at_index - check the code for Holberton School students.
 * @head: puntero al primer nodo
 * @index: position.
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *nodo;

	if (head)
	{
		nodo = head;
		for (i = 0; i < index; i++)
		{
			if (nodo == NULL)
			{
				return (NULL);
			}
			nodo = nodo->next;
		}
		return (nodo);
	}
	return (NULL);
}
}
