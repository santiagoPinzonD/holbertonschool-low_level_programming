#include "holberton.h"

/**
* main - esto es imprimir el argumento 0 que es el name
* @argc: la cantidad de argumentos
* @argv: el valor de cada argumento
* Return: always 0
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	if (argc != 3)
	{
		printf ("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);	
	}
}
