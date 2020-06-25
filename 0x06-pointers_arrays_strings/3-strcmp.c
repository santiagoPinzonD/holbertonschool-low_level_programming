#include "holberton.h"

/**
 * _strcmp - check the code for Holberton School students.
 * @s1: this a string
 * @s2: this is a string
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)/*mientras s1 y s1 == s2*/
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
/*se retorna la resta que seria la comparacion y se hace entre binarios*/
}
