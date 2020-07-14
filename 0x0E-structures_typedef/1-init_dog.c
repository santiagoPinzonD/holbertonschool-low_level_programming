#include "dog.h"

/**
 * init_dog - check the code for Holberton School students.
 * @d: puntero que apunta a la struct dog
 * @name: un puntero de tipo char
 * @age: edad
 * @owner: propietario
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
