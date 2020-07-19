#include "variadic_functions.h"

/**
 * print_all - check the code for Holberton School students.
 * @format: lista de argumentos pasados
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	cars array[] = {
		{"c", pchar},
		{"i", pint},
		{"f", pfloat},
		{"s", pstring},
		{NULL, NULL},
	};

	int cf = 0;
	int ca;
	char *string = "";

	va_list charl;

	va_start(charl, format);

	while (format[cf] != '\0')
	{
		ca = 0;
		while (array[ca].argu != NULL)
		{
			if (format[cf] == *array[ca].argu)
			{
				printf("%s", string);
				array[ca].func(charl);
				string = ", ";
			}
			ca++;
		}
		cf++;
	}
	printf("\n");
	va_end(charl);
}
/**
 * pchar - check the code for Holberton School students.
 * @charl: lista de args
 * Return: void
 */
void pchar(va_list charl)
{
	printf("%c", va_arg(charl, int));
}
/**
 * pint - check the code for Holberton School students.
 * @charl: list of args
 * Return: void
 */
void pint(va_list charl)
{
	printf("%d", va_arg(charl, int));
}
/**
 * pfloat - check the code for Holberton School students.
 * @charl: list of args
 * Return: void
 */
void pfloat(va_list charl)
{
	printf("%f", va_arg(charl, double));
}
/**
 * pstring - check the code for Holberton School students.
 * @charl: list of args
 * Return: void
 */
void pstring(va_list charl)
{
	char *s;

	s = va_arg(charl, char *);
	if (s == NULL)
	{
		s = "(nil)";
	}
	printf("%s", s);
}
