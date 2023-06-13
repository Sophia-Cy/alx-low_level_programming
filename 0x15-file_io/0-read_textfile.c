#include "main.h"
#include <stdlib.h>

/**
  *read_textfile- Read the text file print to STDOUT
  *@filename: the text file being read
  *@letters: the number of ltters to be read
  *Return: the actual number of letters read and printed
  * 0 when function fails or filename is NULL
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buv;
	ssize_t fd;
	ssize_t w;
	ssize_t v;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0)
	buv = malloc(sizeof(char) * letters);
	v = read(fd, buv, letters);
	w = write(STDOUT_FILENO, buv, v);

	free(buv);
	close(fd);
	return (w);
}
