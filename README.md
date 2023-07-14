# Alx-practice
# ALX Low-Level Programming - Hello, World

This repository contains solutions for various tasks related to low-level programming in the C language. Each task focuses on different aspects of C programming and helps to build a strong foundation in this language.

## Concepts

The project primarily focuses on the following concept:

- C programming

## Resources

To successfully complete the project, it is recommended to read or watch the following resources:

- [Everything you need to know to start with C.pdf](resources/Everything%20you%20need%20to%20know%20to%20start%20with%20C.pdf) (You do not have to learn everything in there yet, but make sure you read it entirely first)
- Dennis Ritchie
- "C" Programming Language: Brian Kernighan
- Why C Programming Is Awesome
- Learning to program in C part 1
- Learning to program in C part 2
- Understanding C program Compilation Process
- Betty Coding Style
- Hash-bang under the hood (Look at only after you finish consuming the other resources)
- Linus Torvalds on C vs. C++ (Look at only after you finish consuming the other resources)

Additionally, you may refer to the following man or help pages:

- `gcc`
- `printf (3)`
- `puts`
- `putchar`

## Learning Objectives

By the end of this project, you should be able to explain the following topics without the help of Google:

- General
  - Why C programming is awesome
  - Who invented C
  - Who are Dennis Ritchie, Brian Kernighan, and Linus Torvalds
  - What happens when you type `gcc main.c`
  - What is an entry point
  - What is `main`
  - How to print text using `printf`, `puts`, and `putchar`
  - How to get the size of a specific type using the unary operator `sizeof`
  - How to compile using `gcc`
  - What is the default program name when compiling with `gcc`
  - What is the official C coding style and how to check your code with `betty-style`
  - How to find the right header to include in your source code when using a standard library function
  - How does the `main` function influence the return value of the program

## Copyright - Plagiarism

- You are tasked to come up with solutions for the tasks yourself to meet the learning objectives.
- You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
- You are not allowed to publish any content of this project.
- Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements

### C

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file at the root of the repo, containing a description of the repository
- A `README.md` file, at the root of the folder of this project, containing a description of the project
- There should be no errors and no warnings during compilation
- You are not allowed to use `system`
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`

### Shell Scripts

- Allowed editors: vi, vim, emacs
- All your scripts will be tested on Ubuntu 20.04 LTS
- All your scripts should be exactly two lines long (`$ wc -l file` should print 2)
- All your files should end with a new line
- The first line of all your files should be exactly `#!/bin/bash`

## How to Use the Betty Linter

To run the Betty linter, use the following command: `betty <filename>`

Follow the steps below to set up the Betty linter:

1. Go to the [Betty repository](https://github.com/holbertonschool/Betty)
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

Write a script that runs a C file through the preprocessor and saves the result into another file.

- The C file name will be saved in the variable `$CFILE`
- The output should be saved in the file `c`

Example usage:
```
$ export CFILE=main.c
$ ./0-preprocessor
$ tail c
# 942 "/usr/include/stdio.h" 3 4

# 2 "main.c" 2


# 3 "main.c"
int main(void)
{
    return (0);
}
```
- File: [0-preprocessor](0-preprocessor)

### 1. Compiler

Write a script that compiles a C file but does not link.

- The C file name will be saved in the variable `$CFILE`
- The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.

Example usage:
```
$ export CFILE=main.c
$ ./1-compiler
$ ls
0-preprocessor  1-compiler   c            main.o
Makefile               100-intel      main.c  main.s
```
- File: [1-compiler](1-compiler)

### 2. Assembler

Write a script that generates the assembly code of a C code and saves it in an output file.

- The C file name will be saved in the variable `$CFILE`
- The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.

Example usage:
```
$ export CFILE=main.c
$ ./2-assembler
$ ls
0-preprocessor  1-compiler  2-assembler c  main.c  main.s  Makefile
```
- File: [2-assembler](2-assembler)

### 3. Name

Write a script that compiles a C file and creates an executable named `cisfun`.

- The C file name will be saved in the variable `$CFILE`

Example usage:
```
$ export CFILE=main.c
$ ./3-name
$ ls
0-preprocessor  1-compiler   3-name  cisfun  main.o  Makefile
100-intel       2-assembler  c       main.c  main.s
```
- File: [3-name](3-name)

### 4. Hello, puts

Write a C program that prints exactly "Programming is like building a multilingual puzzle", followed by a



Practice makes good programmers and consistency makes great coders.💻💪
