#include "holberton.h"

/**
* _isalpha - checks for lowercase char
* @c: the character to check
*
* Return: On lowercase 1
*
* Otherwise 0.
*/
int _isalpha(int c)
{
	int min = 97;
	int x = 122;
	int a = 65;
	int b = 90;

	if ((c >= min && c <= x) || (c >= a && c <= b))
{
	return (1);
}
	else
{
	return (0);
}
}
