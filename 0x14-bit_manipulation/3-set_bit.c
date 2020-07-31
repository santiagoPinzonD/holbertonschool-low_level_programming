#include "holberton.h"

/**
 * set_bit -  sets the value of a bit to 1.
 * @n: integer
 * @index: position
 * Return: -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
	{
		return (-1);
	}
	*n = *n | (1 << index);
	return (1);
}
