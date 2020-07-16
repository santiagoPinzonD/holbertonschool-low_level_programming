#include "function_pointers.h"

/**
* array_iterator - prints an integer
* @array: arreglo
* @size: tamaño de matriz
* @action: puntero que apunta a array
* Return: Nothing.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (action && array)
	{
		for (x = 0; x < size; x++)
		{
			action(array[x]);
		}
	}
}
