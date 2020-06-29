#include "holberton.h"

/**
 * *_strchr - check the code for Holberton School students.
 * @s: thi is a pointer
 * @c: thi is a variable type of char
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int x;

	for (; s[x] != '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}
	if (s[x] == c)
	{
		return (s + x);
	}
	return (0);
}
