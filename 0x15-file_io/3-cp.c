#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
 * errors - outputs error messages concerned with files
 * @file_from: file which is to be copied
 * @file_to: file which is to be pasted to
 * @argv: arguments vector
 */
void errors(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant write to %s\n", argv[1]);
		exit(99);
	}
}

/**
 * copy - copy contents of 1 file into another
 * @argv: argument vectors
 *
 * Return: void
 */
void copy(char *argv[])
{
	int fd, w_fd, count, checker, bytes;
	char buffer[1024];

	fd = open(argv[1], O_RDONLY);
	w_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);

	errors(fd, w_fd, argv);

	bytes = 1024;
	while (bytes == 1024)
	{
		bytes = read(fd, buffer, sizeof(buffer));
		if (bytes == -1)
			errors(-1, 0, argv);
		count = write(w_fd, buffer, bytes);
		if (count == -1)
			errors(0, -1, argv);
	}
	count = close(fd);
	if (count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	checker = close(w_fd);
	if (checker == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", w_fd);
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

	copy(argv);
	return (0);
}
