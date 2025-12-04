![Shell Basics Banner](/assets/holberton.png)

# File I/O in C – Project README

## Introduction
This project introduces low-level file management in C using **POSIX system calls**.  
It focuses on understanding how files are manipulated at the OS level and how programs interact with file descriptors instead of relying on higher-level C library functions.  
Mastering these operations is essential for writing efficient, secure, and predictable low-level programs.

## Learning Objectives
At the end of this project, I am able to:

- Identify and use reliable sources of documentation online (manual pages, POSIX specs)
- Create, open, close, read, and write files using system calls
- Explain what a file descriptor is and how the OS manages them
- List and describe the 3 standard file descriptors and their POSIX names:  
  - `STDIN_FILENO` (0) – Standard input  
  - `STDOUT_FILENO` (1) – Standard output  
  - `STDERR_FILENO` (2) – Standard error  
- Use the system calls `open`, `close`, `read`, `write` correctly
- Explain the flags `O_RDONLY`, `O_WRONLY`, `O_RDWR`
- Understand and set file permissions when creating a file
- Distinguish clearly between a **function** and a **system call**
- Recognize how the OS handles errors in system-level I/O  

---

## Project Tasks

### **0. Tread lightly, she is near**
**Objective:** Read a text file and print its content to standard output.  
**Prototype:**  
`ssize_t read_textfile(const char *filename, size_t letters);`  
**Expected behavior:**  
- Read up to `letters` characters  
- Print them to `STDOUT`  
- Return the number of bytes actually printed  
**Failure cases:** return `0` if  
- `filename` is `NULL`  
- the file cannot be opened or read  
- `write` fails or writes fewer bytes than expected  

---

### **1. Under the snow**
**Objective:** Create a file with specific permissions and write content to it.  
**Prototype:**  
`int create_file(const char *filename, char *text_content);`  
**Expected:**  
- Create or truncate file  
- Permissions must be `rw-------` on creation  
- Return `1` on success, `-1` on failure  
**Notes:**  
- Do not modify permissions if the file already exists  
- If `text_content` is `NULL`, create an empty file  

---

### **2. Speak gently, she can hear**
**Objective:** Append text at the end of an existing file.  
**Prototype:**  
`int append_text_to_file(const char *filename, char *text_content);`  
**Expected:**  
- Add text at file end  
- Return `1` on success, `-1` on failure  
**Rules:**  
- Do not create file if it doesn’t exist  
- If `text_content` is `NULL`, add nothing but still return `1` if the file exists  

---

### **3. cp**
**Objective:** Write a program that copies the content of one file into another using system calls.  
**Usage:**  
`cp file_from file_to`  

**Exit codes & errors:**  
- `97`: Wrong number of arguments  
  - Print: `Usage: cp file_from file_to`  
- `98`: Cannot read from `file_from`  
  - Print: `Error: Can't read from file NAME`  
- `99`: Cannot write to `file_to`  
  - Print: `Error: Can't write to NAME`  
- `100`: Cannot close file descriptor  
  - Print: `Error: Can't close fd FD_VALUE`  

**Technical requirements:**  
- Truncate `file_to` if it already exists  
- Use a buffer of `1024` bytes  
- Use `read`, `write`, `open`, `close`  
- Use `dprintf` for error messages  
- Permissions for created file: `rw-rw-r--`  

---

## Conclusion
This project strengthened my understanding of system-level file operations and error handling.  
By implementing each task manually using POSIX system calls, I learned how programs interact directly with the operating system, how file descriptors work internally, and how to manage permissions, buffers, and failure scenarios properly.  
These foundations are critical for building robust, efficient C programs and for tackling future projects involving system programming, shell creation, and low-level I/O mechanisms.

