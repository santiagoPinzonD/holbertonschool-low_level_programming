#include "lists.h"
/**
 * insert_dnodeint_at_index - function to insert new at given index
 * @h: double pointer type to head of list
 * @idx: index at which new will be added
 * @n: int type for data to be added
 * Return: new if successful, NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new = malloc(sizeof(dlistint_t));
	unsigned int count = 0;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (*h == NULL)
	{*h = new;
		new->next = NULL;
		return (new);
	}
	temp = *h;
	if (idx == 0)
	{new->next = temp;
		temp->prev = new;
		*h = new;
		return (new);
	}

	while (count != (idx - 1))
	{
		temp = temp->next;
		count++;
		if (temp == NULL)
		{free(new);
			return (NULL);
		}
	}
	new->next = temp->next;
	new->prev = temp;
	if (temp->next == NULL)
		temp->next = new;
	else
	{
		temp->next->prev = new;
		temp->next = new;
	}
	return (new);
}
