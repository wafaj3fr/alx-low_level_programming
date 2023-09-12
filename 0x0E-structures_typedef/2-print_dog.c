#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to dog
 * Return: Pointer to struct
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;
	d->name ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n");
	d->age >= 0 ? printf("Age: %6f\n", d->age) : printf("Age: (nil)\n");
	d->owner ? printf("Owner: %s\n", d->owner) : printf("Owner: (nil)\n");
}
