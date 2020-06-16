#include "holberton.h"

/**
* print_last_digit - check the code for Holberton School students.
* @r: the number check
* Return: Always 0.
*/
int print_last_digit(int r)
{
	int rest = r % 10;

	if (rest < 0)
{
	_putchar (-rest + '0');
	return (-rest);
}
	else
{
	_putchar (rest + '0');
	return (rest);
}
}
