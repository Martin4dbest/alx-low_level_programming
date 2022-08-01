#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Dog characteristics
 * @name: name of dog
 * @age: The age of the dog.
 * @owner: name of owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
