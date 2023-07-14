# ALX Low-Level Programming Tasks

This repository contains solutions for various tasks related to low-level programming in the C language. Each task focuses on different aspects of C programming and helps to build a strong foundation in this language.

## Betty linter

To run the Betty linter, use the following command: `betty <filename>`

Follow the steps below to set up the Betty linter:

1. Go to the Betty repository
2. Clone the repo to your local machine
3. Change directory to the Betty directory
4. Install the linter with `sudo ./install.sh`
5. Create a new file called `betty` using `emacs` or `vi`, and copy the provided script
6. Save the file and exit
7. Change the permissions to apply to all users with `chmod a+x betty`
8. Move the `betty` file into the `/bin/` directory or somewhere else in your `$PATH` with `sudo mv betty /bin/`
9. You can now run the Betty linter using the command `betty <filename>`

## Tasks

### 0. Preprocessor

This task involves writing a script that runs a C file through the preprocessor and saves the result into another file. The C file name will be saved in the variable `$CFILE`, and the output should be saved in the file `c`.

- File: [0-preprocessor](0-preprocessor)

### 1. Compiler

In this task, you need to write a script that compiles a C file but does not link it. The C file name will be saved in the variable `$CFILE`, and the output file should be named the same as the C file but with the extension `.o` instead of `.c`.

- File: [1-compiler](1-compiler)

### 2. Assembler

Write a script that generates the assembly code of a C code and saves it in an output file. The C file name will be saved in the variable `$CFILE`, and the output file should be named the same as the C file but with the extension `.s` instead of `.c`.

- File: [2-assembler](2-assembler)

### 3. Name

This task requires writing a script that compiles a C file and creates an executable named `cisfun`. The C file name will be saved in the variable `$CFILE`.

- File: [3-name](3-name)

### 4. Hello, puts

Write a C program that prints the exact phrase "Programming is like building a multilingual puzzle", followed by a new line. The program should use the `puts` function and should end with the value `0`.

- File: [4-puts.c](4-puts.c)

### 5. Hello, printf

In this task, you need to write a C program that prints the exact phrase "with proper grammar, but the outcome is a piece of art,", followed by a new line. The program should use the `printf` function and should return `0`.

- File: [5-printf.c](5-printf.c)

### 6. Size is not grandeur, and territory does not make a nation

Write a C program that prints the size of various types on the computer it is compiled and run on. The program should produce the exact same output as the example provided.

- File: [6-size.c](6-size.c)

### 7. Intel

This task involves writing a script that generates the assembly code (Intel syntax) of a C code and saves it in an output file. The C file name will be saved in the variable `$CFILE`.

- File: [100-intel](100-intel)

### 8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity

Write a C program that prints the exact phrase `"and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error. The program should return `1`, and it should compile without any warnings when using the `-Wall` gcc option.

- File: [101-quote.c](101-quote.c)

Please note that the files mentioned above are placeholders and need to be replaced with the actual files containing the solutions to the tasks.
