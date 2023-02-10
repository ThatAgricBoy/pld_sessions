#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *function to create a struct. if the struct created is null the function to print NILL
 */

void print_dog(struct dog *d)
{
	struct dog;

	if(d == NULL)
	return;
	if(d->name == NULL)
	d->name = "(nill)";
	if(d->owner == NULL)
	d->owner = "(nill)";
	printf("Name: %s\n", d->name);

	printf("Owner: %s\n", d->owner);

	printf("Age: %f\n", d->age);

}
