#include "holberton.h"

/**
 * create_array - check the code for Holberton School students.
 * @size: el valor entero que entra
 * @c: el valor caracter que entra
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *s;

	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		s[x] = c;
	}

	return (s);
}
