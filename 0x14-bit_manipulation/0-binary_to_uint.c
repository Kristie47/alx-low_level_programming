#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 * Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	int i, mult = 1, count = 0, sum = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			count++;
		else
			return (0);
	}

	for (count -= 1; count >= 0; count--, mult *= 2)
	{
		if (b[count] == '1')
			sum += 1 * mult;
	}

	return (sum);
}
