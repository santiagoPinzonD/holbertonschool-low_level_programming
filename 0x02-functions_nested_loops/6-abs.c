#include "holberton.h"

/**
* _abs - returns y value of a number
* @n: the number to check
* Return: y number
* On zero 0.
*/

int _abs(int n)
{
	if (n >= 0)
{
	return (n);
}
	else
{
	return (n * -1);
}
}
