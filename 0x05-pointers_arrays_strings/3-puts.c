#include "holberton.h"

/**
* _puts - check the code for Holberton School students.
* @str: this is a pointer
* Return: Always 0.
*/

void _puts(char *str)
{
	int x;

	x = 0;

	for (x = 0; str[x] != '\0'; x++)
{
	_putchar(str[x]);
}
	_putchar('\n');
}
