#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: null terminated string to write to the file
 * Return: 1 on success or -1 if any fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, lt = 0, nw;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content)
		lt++;
	lt--;
	nw = write(fd, text_content, lt);
	if (nw == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
