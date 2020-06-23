#include "holberton.h"

/**
* puts2 - prints a string in reverse
*
* @str: string in reverse
*
* Return: void
*/
void puts2(char *str)
{
	int x = 0;
	int z;

	while (str[x] != '\0')
{
	x++;
}
	for (z = 0; z < x; z++)
{
	if (z % 2 == 0)
	{
	_putchar(str[z]);
	}
}
	_putchar('\n');
}
