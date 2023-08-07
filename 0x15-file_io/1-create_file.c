#include "main.h"

/**
 * create_file - a file creator.
 * @filename: the pointer to the file's name.
 * @text_content: the string pointer to write to the file.
 *
 * Return: a -1 If the function fails,
 *         else output a 1.
 */

int create_file(const char *filename, char *text_content)
{
	int af, m, qnt = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (qnt = 0; text_content[qnt];)
			qnt++;
	}

	af = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	m = write(af, text_content, qnt);

	if (af == -1 || m == -1)
		return (-1);

	close(af);

	return (1);
}

