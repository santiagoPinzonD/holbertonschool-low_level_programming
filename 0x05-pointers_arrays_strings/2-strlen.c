#include "holberton.h"

/**
* _strlen - check the code for Holberton School students.
* @s: this is a pointer
* Return: Always 0.
*/

int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++);
	return (x);
}
