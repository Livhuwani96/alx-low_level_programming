#include "main.h"
#include <unistd.h>
/**
 * _putchar - This will write the character c to stdout
 * @c: Will also write the character to print
 *
 * Return: And on success, it will return 1.
 * And on error, a -1 is will be returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

