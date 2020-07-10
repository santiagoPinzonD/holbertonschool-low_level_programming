#include "holberton.h"

/**
* array_range - check the code for Holberton School students.
* @min: numero minimo
* @max: numero max
* Return: Always 0.
*/

int *array_range(int min, int max)
{
	int *s;
	int x, z;

	if (min > max)
	{
		return (NULL);
	}
	s = malloc(max - min + 1);

	if (s == NULL)
	{
		return (NULL);
	}
	for (x = min, z = 0; x <= max; x++, z++)
	{
		s[z] = x;
	}
	return (s);
}
