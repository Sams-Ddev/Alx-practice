#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int main() {
  int fd = open("myfile.txt", O_WRONLY);
  if (fd == -1) {
    perror("open");
    return (1);
  }

  dprintf(fd, "Hello, world!\n");

  close(fd);

  return (0);
}

