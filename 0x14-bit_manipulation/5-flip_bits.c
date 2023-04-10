#include "main.h"

/**
 * flip_bits - This counts the numbers of the bits to change
 * it gets from one number to another number
 * @o: 1st number
 * @t: 2nd number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int o, unsigned long int t)
{
	int index, count = 0;
	unsigned long int current;
	unsigned long int exclusive = o ^ t;

	for (index = 63; index >= 0; index--)
	{
		current = exclusive >> index;
		if (current & 1)
			count++;
	}

	return (count);
}

