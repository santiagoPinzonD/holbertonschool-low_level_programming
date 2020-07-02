#include "holberton.h"

/**
 * _strlen_recursion - check the code for Holberton School students.
 * @s: pointer que punta a una string
 * Return: void
 */

int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}

	return (*s);
}
