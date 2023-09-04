#include "main.h"

/**
 * create_file - This creates a file.
 * @filename: this a pointer to the file to create name.
 * @text_content: This a pointer to a str to write.
 *
 * Return: -1 if the function fails.
 */

int create_file(const char *filename, char *text_content)
{
	int dc, m, cnt = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (cnt = 0; text_content[cnt];)
			cnt++;
	}

	dc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	m = write(dc, text_content, cnt);

	if (dc == -1 || m == -1)
		return (-1);

	close(dc);

	return (1);
}

