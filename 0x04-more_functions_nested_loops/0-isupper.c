#include "holberton.h"

/**
* _isupper - this checks for upper char
*@c: variable for supper
* Return: Always 0.
*/

int _isupper(int c)
{
	int min = 65;
	int x = 90;

	if ((c >= min) && (c <= x))
{
	return (1);
}
	else
{
	return (0);
}
}
