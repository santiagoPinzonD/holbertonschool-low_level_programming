#include "holberton.h"

/**
* _strspn - check the code for Holberton School students.
* @s: primer cade
* @accept: cadena
* Return: 0
*/

unsigned int _strspn(char *s, char *accept)
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
		if (accept[g] == '\0')
		{
			break;
		}
	}
	return (x);
}
