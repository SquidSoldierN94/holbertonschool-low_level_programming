#include "dog.h"

/**
 * init_dog - Initializes a dog structure
 * @d: Pointer to the struct dog to initialize
 * @name: Pointer to the string representing the name of the dog
 * @age: Float representing the age of the dog
 * @owner: Pointer to the string representing the owner of the dog
 *
 * Return: Void (no return value)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d == NULL)
        return;

    d->name = name;
    d->age = age;
    d->owner = owner;
}
