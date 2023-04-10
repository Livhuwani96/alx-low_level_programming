#include "main.h"

/**
 * print_binary - This will print the binary that is equivalent to a decimal number
 * @n: The number will print in binary
 */
void print_binary
(unsigned long int n)
{
	int indexs, c = 0;
	unsigned long int current;

	for (indexs = 63; indexs >= 0; indexs--)
	{
		current = n >> indexs;

		if (current & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
