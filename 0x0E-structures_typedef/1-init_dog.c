#include "dog.h"
/**
 * init_dog - function that initializes a variable
 * @d: pointer to structure
 * @name: parameter name
 * @age: parameter age
 * @owner: parameter owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
