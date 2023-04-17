#ifndef DOG_H
#define DOG_H

/**
 * Description:  Header file containing declarations function
 *  used in the 0x0E-structures_typedef directory
 *
 * struct dog -  definition for a new struct dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * dog_t - Typedef for struct dog
 */

typedef struct dog
{
    char *name;
    float age;
    char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
