#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
* struct dog - Descripción breve
* @name: primer miembro
* @age: segundo miembro
* @owner: tercer miembro
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
