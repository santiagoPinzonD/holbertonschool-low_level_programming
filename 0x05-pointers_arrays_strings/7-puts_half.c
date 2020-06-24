#include "holberton.h"

/**
* puts_half - prints a string in reverse
*
* @str: string in reverse
*
* Return: void
*/
void puts_half(char *str)
{
	int st = 0;
	int half = 0;

	while (str[st] != '\0')
{
	st++;
}
	if (st % 2 == 0)
{
	half = st / 2;
}
	else
{
	half = (st / 2) + 1;
}
	while (st > half)
{
	_putchar(str[half]);
	half++;
}
	 _putchar('\n');
}
