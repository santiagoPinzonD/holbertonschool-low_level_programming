#include "holberton.h"

/**
* malloc_checked - check the code for Holberton School students.
* @b: integer que recibo
* Return: Always 0.
*/
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);

	if (x == NULL)
	{
		exit(98);
	}

	return (x);
}
