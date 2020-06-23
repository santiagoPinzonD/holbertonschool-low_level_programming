#include "holberton.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int l;
	int i;
	int f;
	char t;

	for (l = 0; s[l] != '\0'; l++)
	{
	}
	for (i = 0, f = l - 1; i < f; i++, f--)
	{
	t = s[i];
	s[i] = s[f];
	s[f] = t;
	}
}
