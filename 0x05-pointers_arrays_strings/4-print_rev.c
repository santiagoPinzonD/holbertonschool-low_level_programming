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
	int x;
	int i;

	for (x = 0; s[x] != '\0'; x++)
{
}
	for (i = x - 1; i >= 0; i--)
{
	_putchar(s[i]);
}
	_putchar('\n');
}
