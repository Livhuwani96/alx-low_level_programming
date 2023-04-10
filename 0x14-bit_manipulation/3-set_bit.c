#include "main.h"

/**
 * set_bit - This code sets a bit at a given index to the value of 1
 * @n: The pointers to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: if true return 1, and -1 for false
 */

int set_bit(unsigned long int *number, unsigned int i)
{
	if (i > 63)
		return (-1);

	*number = ((1UL << i) | *number);
	return (1);
}

