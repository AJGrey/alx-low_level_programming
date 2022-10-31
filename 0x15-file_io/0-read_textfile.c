#include "main.h"
#include <stddef.h>

/**
 * read_textfile - a function to read the text file and prints to POSIX stdio
 * @filename : is the pointer to the file name
 * @letters : is the number if letters it should read and print
 *
 * Return:	0 if the file can not be opened or read
 * 0 if filename is NULL
 * 0 if write fails or does not write the expected output
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int nd, nr;
	char *buff;

	if (!filename)
		return (0);

	fd = open("filename.txt", O_RDONLY);

	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * (letters + 1));
	if (!buff)
		return (0);

	nd = read(fd, buff, letters);
	nr = write(STDOUT_FILENO, buff, nd);

	close(fd);

	free(buff);

	return (nr);
}
