#include "main.h"
/**
 * main - copies the content of a file to another
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 or errors nums
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, closer, nr = 1024, nw;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (nr == 1024)
	{
		nr = read(file_from, buff, 1024);
		if (nr == -1)
			exit(98);
		nw = write(file_to, buff, nr);
		if (nw == -1)
			exit(99);
	}
	closer = close(file_from);
	if (closer == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	closer = close(file_to);
	if (closer == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	return (0);
}
