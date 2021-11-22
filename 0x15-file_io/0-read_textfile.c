#include "main.h"
/**
 * read_textfile - reads a text file and prints it to SO
 * @filename: name of the file to be read
 * @letters: number of characters it should print
 * Return: numbers it could r and w or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nr, nw;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	nr = read(fd, buf, letters);
	if (nr == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	nw = write(STDOUT_FILENO, buf, nr);
	if (nw == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	close(fd);
	return (nr);
}
