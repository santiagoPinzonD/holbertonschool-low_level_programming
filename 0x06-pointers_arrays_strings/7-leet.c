#include "holberton.h"

/**
 * *leet - check the code for Holberton School students.
 * @a: its a pointer
 * Return: Always 0.
 */

char *leet(char *a)
{
	int x;
	int s;
	char z[10] = {'A', 'a', 'E', 'e', 'L', 'l', 'O', 'o', 'T', 't'};
	char b[5] = {'4', '3', '1', '0', '7'};
	int re;

	for (x = 0; a[x] != '\0'; x++)
	{
		for (s = 0; s < 10; s++)
		{
			if (a[x] == z[s])
			{
				re = s / 2;
				a[x] = b[re];
			}
		}
	}
	return (a);
}
