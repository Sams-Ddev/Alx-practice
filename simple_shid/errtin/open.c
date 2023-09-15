#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
	int fd = open("myfile.txt" , O_RDONLY);
	
	if (fd == -1)
	{
		perror("open");
		return (1);
	}

	dprintf(fd, "In this example, the open() function is used to open the file myfile.\n");
	close(fd); 
	
	return (0);
}
