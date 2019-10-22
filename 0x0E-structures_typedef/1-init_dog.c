#include "dog.h"
#include <stdio.h>
/*
 * init_dog - checkeador
 * @d: dog.
 * @name: name.
 * @age: age.
 * @owner:owner.
 * Return: Always.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
	else
	{
		return;
	}
}
