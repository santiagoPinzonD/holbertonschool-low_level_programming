#include "holberton.h"

/**
* _strlen - return the longitud
*
* @s: this is for check
*
* Return: p
*/

int _strlen(char *s)
{
	int p;

	for (p = 0; *s != '\0'; p++)
	{
		s++;
	}
	return (p);
}
