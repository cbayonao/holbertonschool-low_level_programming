#include "holberton.h"

/**
 * read_textfile - check the code for Holberton School students.
 * @filename: str
 * @letters: byte n
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, r, w;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) + letters);
	if (buf == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	if (o == 1)
		return (0);

	r = read(o, buf, letters);
	if (r == -1)
	{
		free(buf);
		return (0);
	}

	w = write(STDOUT_FILENO, buf, r);
	if (w == -1)
	{
		free(buf);
		return (0);
	}

	if (r != w)
		return (0);

	close (o);
	free(buf);

	return (r);
}
