#include "holberton.h"

/**
* swap_int - check the code for Holberton School students.
* @a: this is a variable pointer
* @b: this is a variable pointer
* Return: void
*/

void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
