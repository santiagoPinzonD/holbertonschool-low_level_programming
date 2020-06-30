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
	int aux;

	for (x = 0; needle[x] != '\0'; x++)
	{
		for (b = 0; haystack[b] != '\0'; b++)
		{
			if (haystack[b] == needle[x])
			{
				aux = b;

				for (; needle[x] != '\0'; x++, aux++)
				{
					if (haystack[aux] != needle[x])
					{
						x = 0;
						break;
					}
					else if (needle[x + 1] == '\0')
					{
						return (haystack + b);
					}
				}
			}
		}
	}
	return (0);
}
