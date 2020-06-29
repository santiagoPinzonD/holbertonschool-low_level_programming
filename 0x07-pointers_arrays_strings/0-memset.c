#include "holberton.h"

/**
 * *_memset - check the code for Holberton School students.
 * @s: es la memoria señalada
 * @b: es lo que se va llenar la memoria
 * @n: es la memoria que se va a llenar
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	long int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
