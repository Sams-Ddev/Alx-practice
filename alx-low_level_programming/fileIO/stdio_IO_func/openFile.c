#include <unistd.h>
#include <stdio.h>

/**
 * Opening a file - to open a file, use 'fopen' function
 * Syntax: FILE* fopen(const char* filename, const char* mode);
 */

int main(void)
{
	int fd = open("myfile.txt", O_WRONLY);

	if (fd == -1)
	{
		perror("open");
		return (1);
	}

	fprintf(fd, "%s", "----------------------------------");
	fprintf(fd, "Floats_1\tFloats_2");
	fprintf(fd, "%s", "----------------------------------");
	fprintf(fd, "%f", "0.3322\t40.0321");
	fprintf(fd, "%f", "1.3322\t21.0321");
	fprintf(fd, "%f", "31.322\t100.021");
	fprintf(fd, "%f", "0.3222\t40.2311");

	close(fd);

	return (SUCCESS);
}
