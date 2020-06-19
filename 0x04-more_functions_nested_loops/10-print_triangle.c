#include "holberton.h"

/**
* print_triangle - check the code for Holberton School students.
* @size: thi is a size
* Return: void
*/

void print_triangle(int size)
{
	int cl;
	int cs;
	int x = 10;

	if (size > 0)
	for (cl = 0; cl < size; cl++)
{	
	x--;
	for (cs = 0; cs < size; cs++)
{
	
	if(cs < x)
	_putchar(' ');
	else
	
	_putchar('#');
}
	_putchar('\n');

}
	else
	_putchar('\n');

}
