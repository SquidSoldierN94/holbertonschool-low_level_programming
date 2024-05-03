#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: String containing the binary number.
 *
 * Return: Converted number or 0 if the string is NULL or contains characters
 *         other than '0' and '1'.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_val = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		if (b[i] != '0' && b[i] != '1')
			return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		dec_val *= 2;
		if (b[i] == '1')
			dec_val += 1;
	}
	return (dec_val);
}
