#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @p: pointer to dog
 * Return: Pointer to struct
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("%s\n", d->name ? d->name : "(nil)");
		printf("%f\n", d->age);
		printf("%s\n", d->owner ? d->owner : "(nil)");
	}
}
