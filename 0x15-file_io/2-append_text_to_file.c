#include "main.h"

/**
 * append_text_to_file - This appends text at the end of a file.
 * @filename: This a pointer to the file's name.
 * @text_content: The str to append to the end of the file.
 *
 * Return: A -1 if the function fails or filename is NULL.
 *         A -1 if the file does not exist the user lacks write permissions.
 *         else 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, m, cnt = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (cnt = 0; text_content[cnt];)
			cnt++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	m = write(a, text_content, cnt);

	if (a == -1 || m == -1)
		return (-1);

	close(a);

	return (1);
}

