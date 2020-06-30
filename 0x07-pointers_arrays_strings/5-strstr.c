#include "holberton.h"

/**
 * *_strstr - check the code for Holberton School students.
 * @haystack: esto es toda la cadena
 * @needle: esto es la comparaicion
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	int x, b;
	int aux, aux1;

	aux1 = 0;

	if (*needle == '\0')
	{
		return (haystack);
	}
	for (b = 0; haystack[b] != '\0'; b++)
	{
		aux = b;

		for (x = 0; needle[x] != '\0'; x++, aux++)
		{
			if (haystack[aux] != needle[x])
			{
				aux1 = 0;
				break;
			}
			else
			{
				aux1++;
			}

		}
		if (aux1 != 0)
		{
			return (haystack + b);
		}
	}
	return ('\0');
}
