#include "main.h"

/**
 * read_textfile reads a text file and prints it to stdout
 * @filename: name of the file to be read and printed;
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count;
	char *buffer[1024];

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	/* read contents of the file */
	read(fd, buffer, letters);

	close(fd);
	count = write(STDOUT_FILENO, buffer, letters);
	if (count == -1)
		return (0);
	if (count != (ssize_t)letters)
		return (0);

	return(count);
}
