#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: first element
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *aux = head;

	while (aux != NULL)
	{
		aux = aux->next;
		free(aux);
	}
	free(head);
}
