#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a variable of type dog
 * @d: struct dog
 * @name: nmae of the dog
 * @age: age of the owner
 * @owner: owner of the dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	d->name = name;
	d->age = age;
	d->owner = owner;
}
