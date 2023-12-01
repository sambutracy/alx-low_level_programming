#include "main.h"
/*
 * read_textfile - Reads a text file and writes it to STDOUT
 * @filename: Name of file to read
 * @letters: No of letters to read and write
 *
 * Return: Number of letters read and written, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	ssize_t nrd, nrw;
	char *buf;

	if (!filename)
		return (0);
	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(x, buf, letters);
	nrw = write(STDOUT_FILENO, buf, nrd);

	close(x);
	free(buf);
	return (nrw);
}
