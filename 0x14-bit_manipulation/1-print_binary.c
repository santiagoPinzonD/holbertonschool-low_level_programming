#include "holberton.h"

/**
 * print_binary - check the code for Holberton School students.
 * @n: integers
 * Return: Always 0.
 */

void print_binary(unsigned long int n)
{
	int count = 0;
	unsigned long int aux = n;

	if (aux == 0)
	{
		_putchar('0');
	}
	while (aux > 0)
	{
		aux = aux >> 1;
		count++;
	}
	for (count--; count >= 0; count--)
	{
		if (1 & (n >> count))
			_putchar('1');
		else
			_putchar('0');
	}
}
