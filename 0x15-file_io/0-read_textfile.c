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
	char *bu;
	ssize_t fed;
	ssize_t wm;
	ssize_t tw;

	fed = open(filename, O_RDONLY);
	if (fed == -1)
		return (0);
	bu = malloc(sizeof(char) * letters);
	tw = read(fed, bu, letters);
	wm = write(STDOUT_FILENO, bu, tw);

	free(bu);
	close(fed);
	return (tw);
}

