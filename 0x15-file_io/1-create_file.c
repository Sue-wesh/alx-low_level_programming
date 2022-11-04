#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 * return -1 if filename is NULL
 * if text_content is NULL create an empt file
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_CREAT, 600);

	if (fd > 0)
		truncate(filename, 1);
	write(fd, text_content, 1);
	if (fd < 0)
		return (-1);
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		write(fd, " ", 1);
	close(fd);
	return (1);
}
