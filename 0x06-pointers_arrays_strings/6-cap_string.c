#include "holberton.h"


/**
 * *cap_string - check the code for Holberton School students.
 * @a: pointer
 * Return: char
 */

char *cap_string(char *a)
{
	int x;

	x = 0;

	while (a[x] != '\0')
	{
		if (a[0] >= 97 && a[0] <= 122)
		{
			a[0] -= 32;
		}
		if (a[x] >= 97 && a[x] <= 122 && (a[x - 1] == ',' || a[x - 1] == ';'
					|| a[x - 1] == '.' || a[x - 1] == '!' || a[x - 1] == '?'
					|| a[x - 1] == '"'
					|| a[x - 1] == '(' || a[x - 1] == ')'
					|| a[x - 1] == '{' || a[x - 1] == '}'
					|| a[x - 1] == ' ' || a[x - 1] == 32 || a[x - 1] == '\t'))
		{
			a[x] -= 32;
		}
		x++;

	}
	return (a);
}
