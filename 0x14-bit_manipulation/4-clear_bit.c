#include "main.h"

/**
 * clear_bit - Will set the value of a given bit to 0
 * @n: And the pointers to the number to change
 * @index: The index of the bit will clear
 *
 * Return: 1 if success, -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int i)
{
	if (i > 63)
		return (-1);

	*n = (~(1UL << i) & *n);
	return (1);
}

