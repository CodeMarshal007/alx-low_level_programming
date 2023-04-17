#include "dog.h"
#include <stdio.h>

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: struct dog object
 * struct dog -  definition for a new struct dog
 * @name: name member
 * @age: age member
 * @owner: owner member
 * Return:  nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
