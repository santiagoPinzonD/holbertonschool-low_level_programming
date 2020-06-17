#include "holberton.h"
#include <stdio.h>

/**
* print_to_98 - prints every natural number from n to 98
*
* @n: number given to start from
*
* Return: void
*/

void print_to_98(int n)
{
	if (n < 98)
{
	while (n < 98)
{
	printf("%d, ", n);
	n++;
}
}
	else if (n > 98)
{
	while (n > 98)
{
	printf("%d, ", n);
	n--;
}
}
	if (n == 98)
{
	printf("%d\n", n);
}
}
