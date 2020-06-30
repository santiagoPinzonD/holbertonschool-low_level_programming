#include "holberton.h"

/**
* print_chessboard - check the code for Holberton School students.
* @a: matrix
* Return: void .
*/

void print_chessboard(char (*a)[8])
{
	int c;
	int f;

	for (f = 0; f < 8; f++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[f][c]);
		}
		_putchar('\n');
	}
}
