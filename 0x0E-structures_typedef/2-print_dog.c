#include "dog.h"
#include <stdio.h>

/**
 * print_dog -  a function that prints a struct dog
 * @d: struct dog object
 * struct dog -  definition for a new struct dog
 * @name: name member
 * @age: age member
 * @owner: owner member
 * Return:  nothing
 */

void print_dog(struct dog *d)
{
	char *name, *owner;
	float age;

	if (d == NULL)
		return;

	name = d->name;
	owner = d->owner;
	age = d->age;

	if (name == NULL)
		name = "(nil)";

	if (owner == NULL)
		owner = "(nil)";

	if (age == 0)
		age = -1;

	printf("Name: %s\nAge: %f\nOwner: %s\n", name, age, owner);
}
