#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- The code will read the text file and  print to STDOUT.
 * @filename: Text the file that is being red by code
 * @letters: It numbers the letters to be read
 * Return: m- actual numbers of bytes read and printed
 *        0 whenever the functions fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *u;
	ssize_t d;
	ssize_t m;
	ssize_t t;

	fed = open(filename, O_RDONLY);
	if (d == -1)
		return (0);
	u = malloc(sizeof(char) * letters);
	t = read(d, u, letters);
	m = write(STDOUT_FILENO, u, t);

	free(u);
	close(d);
	return (t);
}

