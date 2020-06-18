#include "holberton.h"

/**
* _isdigit - found the digit of 0 until 9
*@c: variable global
* Return: on digit 1.
*/

int _isdigit(int c)
{
	int a = 48;
	int b = 57;

	if ((c >= a) && (c <= b))
{
	return (1);
}
	else
{
	return (0);
}
}
