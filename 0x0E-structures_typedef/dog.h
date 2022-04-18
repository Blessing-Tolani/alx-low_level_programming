#ifndef DOG_H
#define DOG_H
#include <stdlib.h>

/**
 * struct dog - gives dog details
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(char *name, float age, char *owner);

#endif
