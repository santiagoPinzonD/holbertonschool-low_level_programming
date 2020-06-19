#include "holberton.h"

/**
* print_square - check the code for Holberton School students.
* @size: thi is a size
* Return: void
*/

void print_square(int size)
{
	int cl;
	int cs;

	if (size > 0)
{
	for (cl = 0; cl < size; cl++)
{
	for (cs = 0; cs < size; cs++)

	_putchar('#');
	_putchar('\n');
}
}
	else
	_putchar('\n');
}
