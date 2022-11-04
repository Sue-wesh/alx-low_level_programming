#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int ac, char **av)
{
	int fd, fd1;
	char buf[1024];

	fd = open(file_from, O_CREATE | O_RDONLY, 664);
	fd1 = open(file_to, O_RDWR | O_TRUNC, 664);

	if(ac < 3)
	{
		printf("Usage: cp file_from file_to,\n");
		exit(97);
	}

	if (fd < 0)
	{
		printf("Error: Can't read from file  %s \n", ac[1]);
		exit(98);
	}

	if (fd1 < 0)
	{
		printf("Error: Can't write to %s\n", ac[2]);
		exit(99);
	}

	fdc = close(fd);
	fdc1 = close(fd1);
	
	if (fdc < 0 && fdc1 < 0)
	{
		printf("Error: Can't close fd %d and %d", fd, fd1);
		exit(100);
	}
	                                    
	c = fgetc(fd);
	while (c != EOF)
	{
		fputc(c, fptr2);
		c = fgetc(fptr1);
	}
	                                                                     
	                                                                                  
	close(fd);
	close(fd1);
	return 0;
}
