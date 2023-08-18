#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define MAX_LINE_SIZE 1024

void prompt() {
  printf("#cisfun$ ");
}

void read_command(char *command) {
  fgets(command, MAX_LINE_SIZE, stdin);
  command[strlen(command) - 1] = '\0'; // remove the newline character
}

int execute_command(char *command) {
  char *argv[10];
  int argc = 0;

  // split the command into an array of arguments
  for (char *token = strtok(command, " "); token != NULL; token = strtok(NULL, " ")) {
    argv[argc++] = token;
  }

  // execute the command
  return execvp(argv[0], argv);
}

int main() {
  char command[MAX_LINE_SIZE];

  while (1) {
    prompt();
    read_command(command);

    // if the command is "exit", exit the shell
    if (strcmp(command, "exit") == 0) {
      break;
    }

    // execute the command
    int status = execute_command(command);

    // if the command exited with an error, print the error message
    if (status != 0) {
      perror("Error");
    }
  }

  return 0;
}

