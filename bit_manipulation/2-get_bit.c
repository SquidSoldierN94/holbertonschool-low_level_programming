#include "main.h"

/**
 * get_bit - Get the bit of a given index.
 * @n: Number to evaluate.
 * @index: Position of the bit.
 *
 * Return: Value of the bit or -1 if index is out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
