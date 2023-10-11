#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of typwe struct dog
 * @d: ponter with structure name
 * @name: name of the dog
 * @age: age ofg the dog
 * @owner: ownwer of hte dog
 *
 * Return: Nothing
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
