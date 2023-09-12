#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - entry point
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: ppointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	if (name == NULL)
	{
		free(p);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(p);
		free(name);
		return (NULL);
	}
	else
	{
		p->name = name;
		p->age = age;
		p->owner = owner;
	}
	return (p);
}
