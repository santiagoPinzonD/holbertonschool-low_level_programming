#include "holberton.h"

/**
 * _strdup - check the code for Holberton School students.
 * @str: puntero que apunta a un string
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *s;
	int x, z;

	if (str == NULL)
	{
		return (NULL);
	}

	for (x = 0; str[x] != '\0'; x++)
	{

	}
	s = malloc(x * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	for (z = 0; z <= x; z++)
	{
		s[z] = str[z];
	}
	return (s);
}
