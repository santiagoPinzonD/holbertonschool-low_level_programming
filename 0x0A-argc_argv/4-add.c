#include "holberton.h"

/**
 * main - sumar dos numeros
 * @argc: cantidad de argumentos
 * @argv: valor de cada argumento
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, b;
	int suma;

	suma = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; x < argc; x++)
	{
		for (b == 0; argv[x][b] != '\0'; b++)
		{
			if (isdigit(argv[x][b]) != 0)
			{
				suma = suma  + atoi(argv[x]);
			}

			else
			{
				printf("Error\n");
				return (1);
			}

		}
	}
	printf("%d\n", suma);
	return (0);
}
