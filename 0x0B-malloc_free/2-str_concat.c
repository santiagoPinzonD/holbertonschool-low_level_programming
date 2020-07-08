#include "holberton.h"

/**
* str_concat - check the code for Holberton School students.
* @s1: primera string
* @s2: segunda string
* Return: Always 0.
*/
char *str_concat(char *s1, char *s2)
{
	int x, c, d;
	int z;
	char *a;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (x = 0; s1[x] != '\0'; x++)
	{

	}
	for (z = 0; s2[z] != '\0'; z++)
	{

	}
	a = malloc((x + z) * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < x; c++)
	{
		a[c] = s1[c];
	}
	for (d = 0; d < z; d++, c++)
	{
		a[c] = s2[d];
	}
	return (a);
}
