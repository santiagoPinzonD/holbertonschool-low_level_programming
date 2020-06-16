#include "holberton.h"

/**
* _islower - checks for lowercase char
* @c: the character to check
*
* Return: On lowercase 1
*
* Otherwise 0.
*/
int _islower(int c)
{
	int min = 97;
	int x = 122;

	if ((c >= min) && (c <= x))
{
	return (1);
}
	else
{
	return (0);
}
}
