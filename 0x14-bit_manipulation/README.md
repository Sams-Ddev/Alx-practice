# 0x14. C - Bit Manipulation

## Project Overview
This project is part of the ALX School curriculum and covers various concepts related to bit manipulation in the C programming language.

Project Start Date: August 31, 2023, 6:00 AM
Project End Date: September 1, 2023, 6:00 AM
Checker Release Date: August 31, 2023, 12:00 PM
Auto Review: Will be launched at the deadline

## Learning Objectives
By the end of this project, you are expected to be able to:
- Look for the right sources of information without excessive assistance.
- Understand and manipulate bits using bitwise operators.

## Copyright and Plagiarism
- Solutions for the tasks in this project should be developed independently to meet the learning objectives.
- Plagiarism is strictly prohibited, and copying or publishing project content is not allowed.

## Requirements
- Allowed Editors: vi, vim, emacs
- Compilation: Ubuntu 20.04 LTS using gcc with options -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line.
- A README.md file at the root of the project folder is mandatory.
- Code should adhere to the Betty style, and it will be checked using betty-style.pl and betty-doc.pl.
- Global variables are not allowed.
- Maximum of 5 functions per file.
- Only the standard C library functions malloc, free, and exit are allowed.
- You are allowed to use the _putchar function.
- Do not push _putchar.c, as it will not be considered. The checker uses its own file.
- The prototypes of all functions and the _putchar function should be included in the header file called main.h.
- Remember to push your header file.
- All header files should be include guarded.

## Tasks
### 0. Binary to Unsigned Int
Write a function that converts a binary number to an unsigned int.

```c
unsigned int binary_to_uint(const char *b);


Certainly! Here's a README.md file for your repo project based on the provided guidelines:

markdown
Copy code
# 0x14. C - Bit Manipulation

## Project Overview
This project is part of the ALX School curriculum and covers various concepts related to bit manipulation in the C programming language.

Project Start Date: August 31, 2023, 6:00 AM
Project End Date: September 1, 2023, 6:00 AM
Checker Release Date: August 31, 2023, 12:00 PM
Auto Review: Will be launched at the deadline

## Learning Objectives
By the end of this project, you are expected to be able to:
- Look for the right sources of information without excessive assistance.
- Understand and manipulate bits using bitwise operators.

## Copyright and Plagiarism
- Solutions for the tasks in this project should be developed independently to meet the learning objectives.
- Plagiarism is strictly prohibited, and copying or publishing project content is not allowed.

## Requirements
- Allowed Editors: vi, vim, emacs
- Compilation: Ubuntu 20.04 LTS using gcc with options -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line.
- A README.md file at the root of the project folder is mandatory.
- Code should adhere to the Betty style, and it will be checked using betty-style.pl and betty-doc.pl.
- Global variables are not allowed.
- Maximum of 5 functions per file.
- Only the standard C library functions malloc, free, and exit are allowed.
- You are allowed to use the _putchar function.
- Do not push _putchar.c, as it will not be considered. The checker uses its own file.
- The prototypes of all functions and the _putchar function should be included in the header file called main.h.
- Remember to push your header file.
- All header files should be include guarded.

## Tasks
### 0. Binary to Unsigned Int
Write a function that converts a binary number to an unsigned int.

```c
unsigned int binary_to_uint(const char *b);

###1. Print Binary
Write a function that prints the binary representation of a number.

c
Copy code
void print_binary(unsigned long int n);
###2. Get Bit
Write a function that returns the value of a bit at a given index.

c
Copy code
int get_bit(unsigned long int n, unsigned int index);
###3. Set Bit
Write a function that sets the value of a bit to 1 at a given index.

c
Copy code
int set_bit(unsigned long int *n, unsigned int index);
###4. Clear Bit
Write a function that sets the value of a bit to 0 at a given index.

c
Copy code
int clear_bit(unsigned long int *n, unsigned int index);
###5. Flip Bits
Write a function that returns the number of bits you would need to flip to get from one number to another.

c
Copy code
unsigned int flip_bits(unsigned long int n, unsigned long int m);
###6. Endianness
Write a function that checks the endianness of the machine.

c
Copy code
int get_endianness(void);
###7. Crackme3 (Advanced)
Find the password for a given program. Save the password in the file 101-password.

Copyright © 2023 Ashignui Samuel (Software Engineer), All rights reserved.
