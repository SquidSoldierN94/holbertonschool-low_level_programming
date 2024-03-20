/**
 * free_dog - Frees memory allocated for a dog struct
 * @d: Pointer to the dog struct to free
 *
 * Return: Void
 */
void free_dog(dog_t *d)
{
    if (d != NULL)
    {
        free(d->name);
        free(d->owner);
        free(d);
    }
}
