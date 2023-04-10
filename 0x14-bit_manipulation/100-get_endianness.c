#include "main.h"

/**
 * get_endianness - It checks if the machine is small or big
 * Return: 0 for big, and 1 for small
 */
int get_endianness(void)
{
	unsigned int index = 1;
	char *count = (char *) &index;

	return (*count);
}

