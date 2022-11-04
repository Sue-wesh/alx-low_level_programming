#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters that should be read and printed
 *
 * Return: actual number of letters it could read and print
 * return 0 if the file can not be opened or read
 * return 0 if filename is NULL
 * return 0 if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, wr, r;

	fd = open(filename, O_RDWR, 6);
	if (fd == -1)
		return (0);
	if (filename == NULL)
		return (0);
	wr = write(fd, filename, letters);
	if (wr == -1)
		return (0);
	if (fd > 1)
	{
		char *c;

		r = read(fd, &c, letters);
		printf("%s", c);
	}
	close(fd);
	return (r);
}
