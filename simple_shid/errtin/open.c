#include <unistd.h>

int main(void)
{
	int fd = open("myfile.txt" , O_RDONLY);
	
	if (fd == -1)
	{
		perror("open failed");
		return (1);
	}

	dprintf(fd, "In this example, the open() function is used to open the file myfile.
			txt for reading only. The close() function is used to close the file myfile.txt.
		       	The open() function is a fundamental system call that is used to access
			files in the operating system. It is a common function that is used in C");
	close(fd); 
	
	return (O);
}
