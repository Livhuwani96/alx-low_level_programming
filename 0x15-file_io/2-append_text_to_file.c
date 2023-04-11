#include "main.h"

/**
 * append_text_to_file - This will appends the text at the end of a file.
 * @filename: Pointer points to the name of the file.
 * @text_content: The string to is used to add to the end of the file.
 *
 * Return: When fails or filename is NULL - -1.
 *         If the file does not exist and permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o1, w1, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o1 = open(filename, O_WRONLY | O_APPEND);
	w1 = write(o, text_content, len);

	if (o1 == -1 || w1 == -1)
		return (-1);

	close(o1);

	return (1);
}

