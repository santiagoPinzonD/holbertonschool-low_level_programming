#include "holberton.h"

/**
* reverse_array - check the code for Holberton School students.
* @a: pointer
* @n: pointer
* Return: Always 0.
*/

void reverse_array(int *a, int n)
{
	int x, v;

	n--;
	for (x = 0; x < n; x++, n--)
	{
	v = a[x];
	a[x] = a[n];
	a[n] = v;

	/**
	* primero se incremento y despues se decremento
	*   y se hace la igualacion de x darle el valor n
	*   ya que no se puede hacer s[x] = s[n]
	*/
	}
}
