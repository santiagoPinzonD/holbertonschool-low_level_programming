#include "holberton.h"

/**
* is_prime_number - check the code for Holberton School students.
* @n: i dont know
* Return: Always 0.
*/

int is_prime_number(int n)
{
	/*define las condiciones inciales de la recursividad */
	int resultado = 0;

	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	resultado = primo(n, 2);
	return (resultado);
}
/**
* primo - check the code for Holberton School students.
* @n: la raiz que entra
* @x: iterator
* Return: Always 0.
*/

int primo(int n, int x)
{
	if (n % x == 0)
	{
		return (0);
	}
	if (x < n / 2)
	{
		return (primo(n, x + 1));
	}

	return (1);
}
