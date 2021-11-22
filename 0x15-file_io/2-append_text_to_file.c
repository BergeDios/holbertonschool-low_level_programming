#include "main.h"
/**
 * append_text_to_file - appends text to the end of file
 * @filename: name of file to create
 * @text_content: text to append
 * Return: 1 on success or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nw, lt = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[lt])
			lt++;
		nw = write(fd, text_content, lt);
		if (nw == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
