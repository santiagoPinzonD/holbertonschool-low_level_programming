#include "lists.h"
#include <string.h>
/**
* add_node - check the code for Holberton School students.
* @str: nodos passed
* @head: primer nodo
* Return: Always 0.
*/
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new;

	if (!str)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{

	}
	new->str = malloc(sizeof(char) * (i + 1));
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;
	return (new);
}
