#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints a string in reverse
 *
 * @a: string in reverse
 * @n: variable
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		if (count == n - 1)
		{
			printf("%d", a[count]);
		}
		else
			printf("%d, ", a[count]);
	}
	printf("\n");
}
