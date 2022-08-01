#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print outall data about the struct of dog `d'
 * @d: A dog structure to print
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
