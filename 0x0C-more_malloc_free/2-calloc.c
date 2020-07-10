#include "holberton.h"

/**
* _calloc - check the code for Holberton School students.
* @nmemb: matrix
* @size: tamaño
* Return: Always 0.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int b;

	x = malloc((nmemb * size) * sizeof(int));

	for (b = 0; b < nmemb * size; b++)
	{
		x[b] = 0;
	}
	if (x == NULL)
	{
		return (NULL);
	}
	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	return (x);
}
