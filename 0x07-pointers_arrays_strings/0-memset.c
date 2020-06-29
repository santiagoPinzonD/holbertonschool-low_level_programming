#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{

	long int a;
	
	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
