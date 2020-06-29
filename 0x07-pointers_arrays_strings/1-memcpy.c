#include "holberton.h"

/**
* *_memcpy - check the code for Holberton School students.
* @dest: donde se va a copiar lo de sr
* @src: memria que se va a copiar
* @n: lo que se llena
* Return: Always 0.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	long int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
