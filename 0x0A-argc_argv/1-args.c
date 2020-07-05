#include <stdio.h>

/**
* main - esto es imprimir el argumento 0 que es el name
* @argc: la cantidad de argumentos
* @argv: el valor de cada argumento
* Return: always 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{

	printf("%d\n", argc - 1);
	return (0);
}
