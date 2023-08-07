#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_buffer - 1024 byte memory allocation for a buffer.
 * @file:  file stored in buffer of which char's for.
 *
 * Return: the pointer to the new buffer.
 */

char *create_buffer(char *the_file);
void close_file(int fd);

char *create_buffer(char *the_file)
{
	char *space;

	space = malloc(sizeof(char) * 1024);

	if (space == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", the_file);
		exit(99);
	}

	return (space);
}

/**
 * close_file - closes up file descriptors
 * @fd: targeted file descriptor to be closed up
 */

void close_file(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - makes copies of a file info to another file.
 * @argc: number of arguments fed to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: a 0 if successful.
 *
 * Description: argument count is incorrect - exit code 97
 * file_from does not exist or cannot be read - exit code 98
 * file_to can not be created or written to - exit code 99
 * file_to or file_from cannot be closed - exit code 100
 */

int main(int argc, char *argv[])
{
	int from, to, q, y;
	char *space;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	space = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	q = read(from, space, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || q == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(space);
			exit(98);
		}

		y = write(to, space, q);
		if (to == -1 || y == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(space);
			exit(99);
		}

		q = read(from, space, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (q > 0);

	free(space);
	close_file(from);
	close_file(to);

	return (0);
}

