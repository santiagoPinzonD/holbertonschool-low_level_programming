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

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	x = malloc(nmemb * size);

	if (x == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < nmemb * size; b++)
	{
		x[b] = 0;
	}
	return (x);
}
