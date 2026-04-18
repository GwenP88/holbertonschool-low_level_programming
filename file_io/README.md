<p align="center">
  <img src="./assets/banner.jpeg" alt="holbertonschool-shell Banner">
</p>

# file_io

> The standard library is off the table — time to talk directly to the kernel. `open`, `read`, `write`, `close`: the four syscalls that rule them all.

---

## 📝 Description

This project is part of my low-level programming curriculum at Holberton School. It introduces file I/O at the system call level in C: reading and writing files using `open`, `read`, `write`, and `close` — bypassing the standard library entirely. I learn what file descriptors are, how the three standard file descriptors work, how to set file permissions at creation time, and how to copy file content efficiently using a buffer. The advanced task pushes further into binary file parsing by implementing a minimal ELF header reader that replicates the output of `readelf -h`.

---

## 🎯 Learning Objectives

At the end of this project, I am able to explain how to create, open, close, read, and write files in C using POSIX system calls. I understand what file descriptors are and can identify the three standard ones — `STDIN_FILENO`, `STDOUT_FILENO`, and `STDERR_FILENO` — along with their purpose. I know how to use the flags `O_RDONLY`, `O_WRONLY`, and `O_RDWR`, how to set file permissions when creating a file with `open`, and what the difference is between a system call and a regular C library function. I also understand how to use `dprintf` to write formatted output to a specific file descriptor, and how to handle all error cases gracefully with appropriate exit codes.

---

## 🛠️ Technologies Used

All programs in this project are written in **C** and compiled on **Ubuntu 20.04 LTS** using `gcc` with the flags `-Wall -Werror -Wextra -pedantic -std=gnu89`. Code style is enforced by the **Betty linter**. The allowed syscalls are `read`, `write`, `open`, and `close`. From the standard library, only `malloc`, `free`, and `exit` are permitted — `printf`, `puts`, and similar functions are forbidden except where explicitly allowed. All function prototypes are declared in `main.h`, which uses include guards.

---

## ⚙️ Requirements

- **OS:** Ubuntu 20.04 LTS
- **Compiler:** `gcc` with options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Allowed editors:** `vi`, `vim`, `emacs`
- All files must end with a **new line**
- No errors and no warnings during compilation
- Global variables are **not allowed**
- No more than **5 functions per file**
- Only `malloc`, `free`, and `exit` are allowed from the standard library
- Allowed syscalls: `read`, `write`, `open`, `close`
- `_putchar` is allowed; do not push `_putchar.c`
- All function prototypes must be declared in `main.h`
- All header files must be **include guarded**
- Do not push `main.c` test files
- Prefer POSIX symbolic constants (`STDIN_FILENO`, `O_RDONLY`, etc.) over raw numbers
- Code must follow the **Betty style**

---

## 🚀 Installation

```bash
git clone https://github.com/GwenP88/holbertonschool-low_level_programming.git
cd holbertonschool-low_level_programming/file_io
```

---

## ▶️ Usage / Execution

Compile any `.c` file with its test main and run:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-read_textfile.c -o a
./a Requiescat
```

For the copy program:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-cp.c -o cp
./cp file_from file_to
```

For the ELF header reader:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-elf_header.c -o elf_header
./elf_header ubuntu64
```

---

## 📊 Project Progress

<p align="center">
<img src="assets/progress_barre_100.gif" alt="Mandatory tasks progress" width="80%">
</p>

<p align="center">
<sub>Mandatory tasks completion: 100% --- Advanced tasks completion: 0%</sub>
</p>

---

## ✨ Features

### Task 0 - Tread lightly, she is near

- Mandatory
- Write a function that reads up to `letters` characters from a text file and prints them to stdout; returns the actual number of characters read and printed; returns `0` on any error or if `filename` is `NULL`
- Prototype: `ssize_t read_textfile(const char *filename, size_t letters);` — only `open`, `read`, `write`, `close`, `malloc`, `free`, `exit` allowed
- Reads the file using `open` and `read`, writes to stdout using `write`, handles all error cases by returning `0`

**Files:** `0-read_textfile.c`

---

### Task 1 - Under the snow

- Mandatory
- Write a function that creates a file with permissions `rw-------` and writes `text_content` to it; truncates the file if it already exists but does not change permissions; returns `1` on success and `-1` on failure; creates an empty file if `text_content` is `NULL`
- Prototype: `int create_file(const char *filename, char *text_content);` — only `open`, `write`, `close`, `malloc`, `free`, `exit` allowed
- Uses `O_CREAT | O_WRONLY | O_TRUNC` with permissions `0600`; returns `-1` if `filename` is `NULL`

**Files:** `1-create_file.c`

---

### Task 2 - Speak gently, she can hear

- Mandatory
- Write a function that appends `text_content` to the end of an existing file; does not create the file if it does not exist; returns `1` on success and `-1` on failure; if `text_content` is `NULL`, returns `1` if the file exists and `-1` otherwise
- Prototype: `int append_text_to_file(const char *filename, char *text_content);` — only `open`, `write`, `close`, `malloc`, `free`, `exit` allowed
- Uses `O_WRONLY | O_APPEND`; returns `-1` if `filename` is `NULL`

**Files:** `2-append_text_to_file.c`

---

### Task 3 - cp

- Mandatory
- Write a program that copies the content of one file to another using a 1024-byte buffer; handles all error cases with specific exit codes and stderr messages: `97` for wrong argument count, `98` for unreadable source, `99` for write failure, `100` for close failure
- Usage: `cp file_from file_to`; `dprintf` is allowed; created file permissions: `rw-rw-r--`; reads 1024 bytes at a time
- Correctly copies any file content, truncates `file_to` if it exists, and exits with the appropriate code on any failure

**Files:** `3-cp.c`

---

### Task 4 - elf

- Advanced - **This task is still in progress — my future self is on it.**
- Write a program that displays the ELF header information of an ELF file, matching the output of `readelf -h` (version 2.26.1) for the fields: Magic, Class, Data, Version, OS/ABI, ABI Version, Type, and Entry point address
- Usage: `elf_header elf_filename`; `lseek` may be used once; `read` may be used at most twice at runtime; `printf` is allowed; exits with status `98` and a stderr message if the file is not an ELF file or on error
- Outputs the ELF header fields in the exact same format and alignment as `readelf -h`, handling both 32-bit and 64-bit ELF files

**Files:** `100-elf_header.c`

---

## 🔮 What’s Next

I plan to continue working on this project by completing the advanced tasks that are not done yet. This will allow me to deepen my understanding, improve my skills, and push a bit further beyond the basics (because stopping halfway is not really my style).

---

## 🤝 Contributions & Acknowledgements

Thanks to Holberton School for a project that strips away the comfortable abstraction of `fopen` and `fprintf` and forces a direct conversation with the operating system. Working at the syscall level is humbling and enlightening in equal measure. Special thanks to `man 2 open` — the most useful manual page I have ever read.

---

## 👤 Author

**Gwenaelle PICHOT**
- Student at Holberton School
- Track: `holbertonschool-low_level_programming`
- Project: `file_io`
