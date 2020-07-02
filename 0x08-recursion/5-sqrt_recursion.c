#include "holberton.h"

/**
* _sqrt_recursion - check the code for Holberton School students.
* @n: i dont know
* Return: Always 0.
*/

int _sqrt_recursion(int n)
{
	/*define las condiciones inciales de la recursividad */
	int x = 1;
	int resultado = 0;

	resultado = calculodelaraiz(n, x);
	return (resultado);
}
/**
* calculodelaraiz - check the code for Holberton School students.
* @n: la raiz que entra
* @x: iterator
* Return: Always 0.
*/

int calculodelaraiz(int n, int x)
{
	if (n / x == x && n % x == 0)
	{
		return (x);
	}
	if (n / x < x)
	{
		return (-1);
	}
	x = calculodelaraiz(n, x + 1);
	return (x);
}
