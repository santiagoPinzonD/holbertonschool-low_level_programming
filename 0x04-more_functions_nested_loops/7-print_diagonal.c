#include "holberton.h"

/**
* print_diagonal - check the code for Holberton School students.
* @n: num of time _
* Return: void
*/

void print_diagonal(int n)
{
	int cl;
	int cs;

	if (n > 0)
{
	for (cl = 0; cl < n; cl++)
{
	for (cs = 0; cs < cl; cs++)
{
	_putchar(' ');
}
	_putchar('\\');
	_putchar('\n');
}
}
	else
	_putchar('\n');
}
