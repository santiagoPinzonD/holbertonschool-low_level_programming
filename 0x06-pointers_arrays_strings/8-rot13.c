#include "holberton.h"

/**
 * *rot13 - check the code for Holberton School students.
 * @a: its a pointer
 * Return: Always 0.
 */

char *rot13(char *a)
{
	int x;
	int s;
	char z[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; a[x] != '\0'; x++)
	{
		for (s = 0; s < 52; s++)
		{
			if (a[x] == z[s])
			{
				a[x] = b[s];
				break;
			}
		}
	}
	return (a);
}
