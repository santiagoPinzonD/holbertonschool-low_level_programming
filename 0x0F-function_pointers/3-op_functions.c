#include "3-calc.h"

/**
 * op_add - suma
 *
 * @a: numero 1
 * @b: numero 2
 * Return: suma
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - diferencia de dos operadores
 *
 * @a: num1
 * @b: num2
 * Return: resta
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplicacion
 *
 * @a: num1
 * @b: num2
 * Return: mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 *
 * @a: num1
 * @b: num2
 * Return: div
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo osea residuo de div
 *
 * @a: num1
 * @b: num2
 * Return: residuo
 */
int op_mod(int a, int b)
{
	return (a % b);
}
