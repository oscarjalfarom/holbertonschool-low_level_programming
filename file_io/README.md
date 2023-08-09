# C - File I/O

In this project, I learned about the three standard file descriptors and their
`POSIX` names as well as the difference between function and system calls. I
practiced using the I/O system calls `open`, `close`, `read`, and `write`
and the flags `O_RDONLY`, `WR_ONLY`, and `O_RDWR` to create, open, close,
read, write, set permissions of files in C.

## Tests :heavy_check_mark:

* [tests](./tests): Folder of test files. Provided by Holberton School.

## Header File :file_folder:

* [main.h](./main.h): Header file containing prototypes for all functions
written in the project.

| File                      | Prototype                                                            |
| ------------------------- | -------------------------------------------------------------------- |
| `0-read_textfile.c`       | `ssize_t read_textfile(const char *filename, size_t letters);`       |
| `1-create_file.c`         | `int create_file(const char *filename, char *text_content);`         |
| `2-append_text_to_file.c` | `int append_text_to_file(const char *filename, char *text_content);` |

## Authors

* Oscar Julio Alfaro <a href="https://github.com/oscarjalfarom" rel="nofollow"><img align="center" alt="github" src="https://www.vectorlogo.zone/logos/github/github-tile.svg" height="24" /></a>