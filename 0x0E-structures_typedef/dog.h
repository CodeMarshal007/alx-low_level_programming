#ifndef DOG_H
#define DOG_H

/**
 * Description:  Header file containing declarations function
 *  used in the 0x0E-structures_typedef directory
 */

/**
 * struct dog -  definition for a new struct dog
 * @name: name
 * @age: age
 * @owner: owner
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
