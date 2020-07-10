#include "holberton.h"

/**
* malloc_checked - check the code for Holberton School students.
* @b: integer que recibo
* Return: Always 0.
*/
void *malloc_checked(unsigned int b)
{
	unsigned int *x;

	x = malloc(b * sizeof(int));

	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}
