#include "main.h"

/**
 * get_bit - This code will return the value of a bit at an index in a decimal number
 * @n: The number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int indexs)
{
	int bit_value;

	if (indexs > 63)
		return (-1);

	bit_value = (n >> indexs) & 1;

	return (bit_value);

