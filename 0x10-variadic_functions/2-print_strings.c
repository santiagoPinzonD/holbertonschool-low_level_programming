#include "variadic_functions.h"

/**
 * print_strings - check the code for Holberton School students.
 * @separator: coma y espacio
 * @n: n args
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x;
	char *s;

	va_start(args, n);
	for (x = 0; x < n; x++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (separator != NULL && x != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
