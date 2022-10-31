#include "main.h"

/**
 * append_text_to_file - append text to already existing file
 * @filename: name of the file to be appended to
 * @text_content: string to be appended to the file
 *
 * Return: 1 on success & -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, num;
	/*char buffer[1024];*/
	ssize_t count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	/*buffer = text_content;*/
	num = strlen(text_content);
	count = write(fd, text_content, num);
	close(fd);
	if (count == -1)
		return (-1);
	return (1);
}
