#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- This reads text file and print to POSIX.
 * @filename: text file being read
 * @letters: number of chars to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *baf;
	ssize_t fd;
	ssize_t w;
	ssize_t m;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	baf = malloc(sizeof(char) * letters);
	m = read(fd, baf, letters);
	w = write(STDOUT_FILENO, baf, m);

	free(baf);
	close(fd);
	return (w);
}

