#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog to init
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name == "(nil)";
	if (d->owner == NULL)
		d->owmer = "(nil)";

	printf("Dog Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
