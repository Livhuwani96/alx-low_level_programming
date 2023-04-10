#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read the text file and  print to STDOUT.
 * @filename: Text the file that is being read
 * @letters: number the letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t write;
	ssize_t text;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	text = read(fd, buf, letters);
	write = write(STDOUT_FILENO, buf, text);

	free(buf);
	close(fd);
	return (write);
}

