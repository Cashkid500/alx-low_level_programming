#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Name of the file or path
 * @letters: Number of letters it should read and print
 *
 * Return: Actual number of letters it could read and print
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n_bytes, status;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	n_bytes = read(fd, buffer, letters);
	buffer[n_bytes] = 0;
	close(fd);

	if (n_bytes == 0)
	{
		free(buffer);
		return (0);
	}

	status = write(STDOUT_FILENO, buffer, n_bytes);
	free(buffer);

	return (status);
}

