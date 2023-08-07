#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read in text file printed out to STDOUT.
 * @filename: text file being read
 * @letters: num of letters to read in
 * Return: w- number of read in and printed bytes
 *        filename is NULL or output 0 when function fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *alo;
	ssize_t fd;
	ssize_t m;
	ssize_t k;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	alo = malloc(sizeof(char) * letters);
	k = read(fd, alo, letters);
	m = write(STDOUT_FILENO, alo, k);

	free(alo);
	close(fd);
	return (m);
}

