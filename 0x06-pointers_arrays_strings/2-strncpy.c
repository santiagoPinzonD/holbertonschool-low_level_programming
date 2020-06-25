#include "holberton.h"

/**
* *_strncpy - check the code for Holberton School students.
* @dest: pointer
* @src: pointer
* @n: this a variable n elements
* Return: char
*/

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; src[a] != '\0'; a++) /*this is a count*/
	{
		if (a < n)
		{
			dest[a] = src[a]; /*matching*/
		}
	}
	for (; a < n; a++) /* lo que queda faltando cuando no este en la condicion*/
	{
		dest[a] = '\0'; /*los que sobran de arriba se conviertan en nulo*/
	}
	return (dest);
}
