/**
 * int_index - Searches for an integer in an array
 * @array: Pointer to the array
 * @size: Number of elements in the array
 * @cmp: Pointer to the function used to compare values
 *
 * This function searches for an integer in the array using the comparison
 * function provided. It returns the index of the first element for which
 * the comparison function does not return 0.
 *
 * Return: Index of the first matching element, or -1 if no match found or
 * size is less than or equal to 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    if (array == NULL || cmp == NULL || size <= 0)
        return -1;

    for (int i = 0; i < size; i++)
    {
        if (cmp(array[i]) != 0)
            return i;
    }

    return -1;
}