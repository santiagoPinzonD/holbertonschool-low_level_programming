#include "holberton.h"

/**
 * *_strncat - check the code for Holberton School students.
 * @dest: this is a pointer
 * @src: this a pointer
 * @n: variable common
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	for (b = 0; src[b] != '\0'; b++)
	{
		if (b < n)
		{
			dest[a + b] = src[b];
		}
	}
	src = '\0';
	return (dest);
}
