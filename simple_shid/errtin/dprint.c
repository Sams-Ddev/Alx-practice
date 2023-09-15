#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int main() {
  int fd = open("output.txt", O_WRONLY);
  if (fd == -1) {
    perror("open");
    return (1);
  }

  dprintf(fd, "Hey, world!\n");

  close(fd);

  return (0);
}

