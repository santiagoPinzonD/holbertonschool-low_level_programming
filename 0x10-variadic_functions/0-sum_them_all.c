#include "variadic_functions.h"

/**
 * sum_them_all - check the code for Holberton School students.
 * @n: argumentos
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int x = 0;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		sum = sum + va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
