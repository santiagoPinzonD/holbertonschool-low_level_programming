#include "variadic_functions.h"

/**
 * print_numbers - check the code for Holberton School students.
 * @separator: coma y espacio
 * @n: numero de args
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nent;
	unsigned int x;

	va_start(nent, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(nent, int));
		if (separator != NULL && x != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(nent);
}
