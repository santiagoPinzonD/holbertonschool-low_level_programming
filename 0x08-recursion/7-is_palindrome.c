#include "holberton.h"
/**
* longi - check the code for Holberton School students.
* @s: thi is a pointer
* Return: void
*/

int longi(char *s)
{
	int size = 0;

	if (*s == '\0')
	{
		return (0);
	}

	return (size + 1 + longi(s + 1));
}
/**
 * is_palindrome - check the code for Holberton School students.
 * @s: thi is a pointer
 * Return: void
 */

int is_palindrome(char *s)
{
	char resultado;
	int x;
	int der = 0;


	/*condiciones iniciales */
	x = longi(s);

	if (x == 1)
	{
		return (1);
	}

	resultado = (comparacion(der, x - 1, s));
	return (resultado);
}

/**
* comparacion - check the code for Holberton School students.
* @s: thi is a pointer
* @der: esto es la string al derecho
* @rev: esto es la strign en reversa
* Return: 0
*/

int comparacion(int der, int rev, char *s)
{
	if (s[der] == s[rev]) /* contador de string al derecho */
	{
		if (der > rev)
		{
			return (1);
		}
		return (comparacion(der + 1, rev - 1, s));
	}
	else
	{
		return (0);
	}
}
