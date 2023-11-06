#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a struct dog with provided values
 * @d: pointer to the struct dog
 * @name: name set for dog to initialize
 * @age: age se for the dog to initialize
 * @owner: owner of dog
 * Return: void if null
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
