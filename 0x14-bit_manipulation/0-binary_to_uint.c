#include "main.h"

/**
 * binary_to_uint - This code wil converts a binary number to unsigned int
 * @b: The string will containing the binary numbers
 *
 * Return:It will return the converted numbers
 */
unsigned int binary_to_uint(const char *b)
{
	int indexs;
	unsigned int decimals_values = 0;

	if (!binary)
		return (0);

	for (i = 0; binary[i]; i++)
	{
		if (binary[i] < '0' || binary[indexs] > '1')
			return (0);
		decimals_values = 2 * decimals_values + (binary[i] - '0');
	}

	return (decimal_value);
}

