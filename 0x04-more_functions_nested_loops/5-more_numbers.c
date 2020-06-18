#include "holberton.h"

/**
* more_numbers - check the code for Holberton School students.
*
* Return: Always 0.
*/

void more_numbers(void)
{
	int a;
	int r;
	int x = 10;

	for (a = 0; a < 10; a++)
{
	for (r = 0; r < 15; r++)
{
	if (r > 9)
{
	_putchar(1 + '0');
	x = 0;
}
	_putchar('0' + ((r + x) % 10));
}
	_putchar('\n');
}
}
