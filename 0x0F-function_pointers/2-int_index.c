#include "function_pointers.h"

/**
 * int_index - check if a number is equal to 98
 * @array: the integer to check
 * @size: numero de elementos
 * @cmp: puntero que apunta a una funcion
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x, aux;

	aux = 0;

	if (size <= 0)
	{
		return (-1);
	}
	if (array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			aux = cmp(array[x]);
			if (aux)
			{
				return (x);
			}
		}
	}
	return (-1);
}
