#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @p: pointer to dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("%s\n", d->name);
	if (d->age == NULL)
		printf("(nil)");
	else
		printf("%s\n", d->age);
	if (d->owner == NULL)
		printf("(nil)");
}
