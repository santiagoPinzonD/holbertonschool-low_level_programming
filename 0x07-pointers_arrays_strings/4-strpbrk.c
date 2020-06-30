#include "holberton.h"

/**
* *_strpbrk - check the code for Holberton School students.
* @s: primer cade
* @accept: cadena
* Return: 0
*/

char *_strpbrk(char *s, char *accept)
{
	int x;
	int g;

	for (x = 0; s[x]; x++)
	{
		for (g = 0; accept[g]; g++)
		{
			if (s[x] == accept[g])
			{
				break;
			}
		}
		if (s[x] == accept[g])
		{
			return (s + x);
		}
	}
	return ('\0');
}
