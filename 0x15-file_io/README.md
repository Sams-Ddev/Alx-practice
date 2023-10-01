# File I/O Project

This project consists of several tasks related to file input and output in the C programming language. Each task has its own requirements and objectives. Below, you will find information about each task and how to use them.

## Task 0: Tread lightly, she is near

**Objective**: Write a function that reads a text file and prints it to the POSIX standard output.

- Prototype: `ssize_t read_textfile(const char *filename, size_t letters);`
- Returns the actual number of letters it could read and print.
- If the file cannot be opened or read, return 0.
- If `filename` is NULL, return 0.
- If write fails or does not write the expected amount of bytes, return 0.

Example usage:
```c
./a Requiescat
```

## Task 1: Under the snow

**Objective**: Create a function that creates a file.

- Prototype: `int create_file(const char *filename, char *text_content);`
- Returns 1 on success, -1 on failure (file cannot be created, file cannot be written, write "fails", etc.).
- The created file must have the permissions: rw-------.
- If the file already exists, do not change the permissions.
- If the file already exists, truncate it.
- If `filename` is NULL, return -1.
- If `text_content` is NULL, create an empty file.

Example usage:
```c
./b hello "world"
```

## Task 2: Speak gently, she can hear

**Objective**: Write a function that appends text at the end of a file.

- Prototype: `int append_text_to_file(const char *filename, char *text_content);`
- Returns 1 on success and -1 on failure.
- Do not create the file if it does not exist.
- If `filename` is NULL, return -1.
- If `text_content` is NULL, do not add anything to the file.

Example usage:
```c
./c hello " World!"
```

## Task 3: cp

**Objective**: Write a program that copies the content of a file to another file.

- Usage: `cp file_from file_to`
- If the number of arguments is not correct, exit with code 97 and print "Usage: cp file_from file_to" on the POSIX standard error.
- If `file_to` already exists, truncate it.
- If `file_from` does not exist, or if you cannot read it, exit with code 98 and print "Error: Can't read from file NAME_OF_THE_FILE" on the POSIX standard error.
- If you cannot create or if write to `file_to` fails, exit with code 99 and print "Error: Can't write to NAME_OF_THE_FILE" on the POSIX standard error.
- If you cannot close a file descriptor, exit with code 100 and print "Error: Can't close fd FD_VALUE" on the POSIX standard error.

Example usage:
```shell
./cp file1 file2
```

## Task 4: elf (Advanced)

**Objective**: Write a program that displays the information contained in the ELF header at the start of an ELF file.

- Usage: `elf_header elf_filename`
- Displayed information: Magic, Class, Data, Version, OS/ABI, ABI Version, Type, Entry point address.
- If the file is not an ELF file, or on error, exit with status code 98 and display a comprehensive error message to stderr.

Example usage:
```shell
./elf_header ubuntu64
```

Please note that these are just brief descriptions of the tasks. For detailed requirements and code implementation, refer to the individual source files provided in the respective GitHub repository directories.

**GitHub Repository Links**:
- [Task 0 - 3](https://github.com/USERNAME/REPO_NAME/tree/master/0x15-file_io)
- [Task 4 (Advanced)](https://github.com/USERNAME/REPO_NAME/tree/master/0x15-file_io/100-elf_header.c)

Happy coding!
