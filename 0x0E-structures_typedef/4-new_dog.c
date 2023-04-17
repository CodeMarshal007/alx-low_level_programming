#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog -  a function that creates a new dog.
 * my_new_dog - Typedef for struct dog
 * @name: name member
 * @age: age member
 * @owner: owner member
 * Return:  nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_new_dog;

	my_new_dog = malloc(sizeof(dog_t));

	if (my_new_dog == NULL)
		return (NULL);
	my_new_dog->name = strdup(name);
	if (my_new_dog->name == NULL)
	{
		free(my_new_dog);
		return (NULL);
	}
	my_new_dog->age = age;
	my_new_dog->owner = strdup(owner);
	if (my_new_dog->owner == NULL)
	{
		free(my_new_dog->name);
		free(my_new_dog);
		return (NULL);
	}
	return (my_new_dog);
}
