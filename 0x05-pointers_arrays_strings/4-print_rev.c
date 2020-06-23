#include "holberton.h"

/**
* print_rev - prints a string in reverse
*
* @s: string in reverse
*
* Return: void
*/
void print_rev(char *s)
{
	int x = 0;
	int z;

	while (s[x] != '\0')
{
	x++;
}
	for (z = x - 1; z >= 0; z--)
{
	_putchar(s[z]);
}
	_putchar('\n');
}
