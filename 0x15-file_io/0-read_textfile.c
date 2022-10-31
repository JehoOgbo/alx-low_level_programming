#include "main.h"

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: name of the file to be read and printed;
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count_write, count_read;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	/* read contents of the file */
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	count_read = read(fd, buffer, letters);
	count_write = write(STDOUT_FILENO, buffer, count_read);

	close(fd);

	free(buffer);
	if (count_write == -1)
		return (0);

	return (count_write);
}
