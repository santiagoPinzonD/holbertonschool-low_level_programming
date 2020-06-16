#include "holberton.h"

/**
* jack_bauer -prnts every minute of the day
*
* Return: none
*
*/

	void jack_bauer(void)
{
	int h;
	int m;
	int j;
	int k;
	int t = 9;

	for (h = 0; h <= 2; h++)
{
	if (h == 2)
	t = 3;

	for (m = 0; m <= t; m++)
{
	for (j = 0; j <= 5; j++)
{
	for (k = 0; k <= 9; k++)
{
	_putchar(h + '0');
	_putchar(m + '0');
	_putchar(':');
	_putchar(j + '0');
	_putchar(k + '0');
	_putchar('\n');
}
}
}
}
}
