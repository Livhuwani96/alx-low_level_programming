#include "main.h"

/**
 * append_text_to_file - This will appends the text at the end of a life.
 * @filename: Pointer points to the name of the file.
 * @text_content: The string to be added at the end of the file.
 *
 * Return: When fails or filename is NULL - -1.
 *         If the file does not exist and permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int l, m, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	l = open(filename, O_WRONLY | O_APPEND);
	m = write(o, text_content, len);

	if (l == -1 || m == -1)
		return (-1);

	close(o);

	return (1);
}

