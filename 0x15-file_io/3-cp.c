#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
 * copy - copy contents of 1 file into another
 * @file1: first file name
 * @file2: name of file to be copied to
 *
 * Return: void
 */
void copy(char *file1, char *file2)
{
	int fd, w_fd, count, checker, bytes;
	char *buffer[1024];

	fd = open(file1, O_RDONLY);
	w_fd = open(file2, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1 || w_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read");
		dprintf(STDERR_FILENO, "from file %s\n", file1);
		exit(98);
	}
	if (w_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write");
		dprintf(STDERR_FILENO, "to %s\n", file2);
		exit(99);
	}
	while ((bytes = read(fd, buffer, sizeof(buffer)) > 0))
	{
		count = write(w_fd, buffer, sizeof(buffer));
		if (count == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't");
			dprintf(STDERR_FILENO, "write to %s\n", file2);
			exit(99);
		}
	}
	count = close(fd);
	checker = close(w_fd);
	if (count == -1 || checker == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}
}
/**
 * main - calls other functions
 * @argc: command line argument count
 * @argv: argument vector
 *
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy(argv[1], argv[2]);
	return (0);
}
