#include "function_pointers.h"


/**
* print_name - prints a name as is
* @name: name of the person
* @f: puntero que apunta auna funcion
* Return: Nothing.
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
