#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - check the code for Holberton School students.
 * @a: pointer
 * @size: tamaño de la matriz
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int x, b;
	int suma;

	suma = 0;

	for (x = 0; x < size * size; x += size + 1)
	{
		suma += a[x];
	}
	printf("%d", suma);
	printf(", ");
	suma = 0;

	for (b = size - 1; b <= (size * size) - size; b = b + size - 1)
	{
		suma += a[b];
	}
	printf("%d", suma);
	printf("\n");
}
