#include "main.h"

/**
 * append_text_to_file - Adds text at the end of a file.
 * @filename: the pointer to the file's name
 * @text_content: The to be appended string
 *
 * Return: a -1 If the function fails or filename is NULL.
 *         a -1 If the file does not exist.
 *         else output a 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, m, qnt = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (qnt = 0; text_content[qnt];)
			qnt++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	m = write(o, text_content, qnt);

	if (o == -1 || m == -1)
		return (-1);

	close(o);

	return (1);
}

