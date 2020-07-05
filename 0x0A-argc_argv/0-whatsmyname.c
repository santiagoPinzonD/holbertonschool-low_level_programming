#include <stdio.h>
/**
* main - esto es imprimir el argumento 0 que es el name
* @argc: la cantidad de argumentos
* @argv: el valor de cada argumento
* Return: always 0
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
