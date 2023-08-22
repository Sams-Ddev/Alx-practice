#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


/* buffers read/write */
#define BUFFER_SIZE 1024
int opt_chars_read(void);
int elseif_op(void);
int elseif_op(void);
void forkChild(void);
void remove_newline(char *, ssize_t);
void handle_error(char *error_message);
void handle_eof_or_error(void);

#endif	/* SHELL_H */
