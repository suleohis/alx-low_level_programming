#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: struct of dog
 * @name: char pointer
 * @age: float
 * @owner: char pointer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *ptr_dog;

	if (d == NULL)
		return;

	ptr_dog = d;
	ptr_dog->name = name;
	ptr_dog->age = age;
	ptr_dog->owner = owner;
}
