#include "holberton.h"

/**
 * get_bit - check the code for Holberton School students.
 * @n: integer passed
 * @index: position of a bit.
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 64)
	{
		n >>= index;
		return (n & 1);
	}
	return (-1);
}
