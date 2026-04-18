<p align="center">
  <img src="./assets/banner.png" alt="holbertonschool-low-level-programming Banner">
</p>

# holbertonschool-low_level_programming

> No garbage collector, no safety net, no excuses — just C, the compiler, and me. 🔧

---

## 📄 Description

This repository contains all my low-level programming projects completed as part of the Holberton School curriculum. It is my deep dive into the C programming language: from the very first `printf` all the way to doubly linked lists, hash tables, file I/O at the syscall level, and 64-bit assembly. Each project focuses on a specific concept — memory management, data structures, recursion, pointers, variadic functions — and is built under strict constraints: no global variables, Betty style enforced, and sometimes not even the standard library. The goal is not just to write code that works, but to understand exactly why it works and what the machine is actually doing underneath.

---

## 🎯 Learning Objectives

Across these projects, I learn how C programs are compiled — from preprocessing to linking — and I gain a thorough understanding of variables, data types, operators, and control flow including `if`, `else`, and `while`. I become fully comfortable with pointers and their relationship to arrays and strings, and I am able to implement standard string and memory manipulation functions from scratch without relying on the standard library. I understand dynamic memory allocation: how `malloc`, `free`, `calloc`, and `realloc` work, how heap memory differs from stack memory, and how to verify correctness with Valgrind. I learn to use `argc` and `argv` to receive command-line arguments at runtime, and I understand what variadic functions are and how to write them using `va_start`, `va_arg`, and `va_end`. I build complete data structure libraries from scratch — singly linked lists, doubly linked lists, and hash tables — managing all insertions, deletions, and memory correctly. I understand recursion deeply enough to know both when to use it and when to reach for something else. I also learn to work at the system call level, bypassing the standard library entirely to open, read, write, and close files using POSIX syscalls. By the end of this repository, I have the intuition and the tools to reason about memory, understand what the compiler does, and write C that is clean, correct, and efficient.

---

## 📁 Repository Structure

```bash
holbertonschool-low_level_programming/
├── argc_argv/
├── doubly_linked_lists/
├── file_io/
├── functions_nested_loops/
├── hash_tables/
├── hello_world/
├── malloc_free/
├── more_functions_nested_loops/
├── more_malloc_free/
├── pointers_arrays_strings/
├── recursion/
├── singly_linked_lists/
├── structures_typedef/
├── variadic_functions/
├── variables_if_else_while/
└── README.md
```

---

## ✨ Projects / Contents

### hello_world
- Introduction to C: compilation pipeline, `printf`, `puts`, `putchar`, `sizeof`, and Betty style
- C, GCC, Ubuntu 20.04 LTS, Bash scripts, Betty linter

### variables_if_else_while
- Variables, arithmetic, conditionals, loops, ASCII arithmetic, and combination generation
- C, GCC, `putchar`-only constraints, Betty linter

### functions_nested_loops
- Functions, prototypes, header files, nested loops, Fibonacci sequences, and FizzBuzz
- C, GCC, `_putchar`, Betty linter

### more_functions_nested_loops
- More complex functions, terminal shape drawing, prime factorization, and integer printing without `printf`
- C, GCC, `_putchar`, Betty linter

### pointers_arrays_strings
- Three-part deep dive into pointers, arrays, strings, memory manipulation, pointers to pointers, and multidimensional arrays
- C, GCC, `_putchar`, no standard library

### recursion
- Recursive implementations of string operations, factorial, power, square root, prime check, and palindrome detection — no loops allowed
- C, GCC, `_putchar`, no loops, no static variables

### malloc_free
- Dynamic memory allocation: `malloc`, `free`, string duplication, 2D grid allocation, and Valgrind verification
- C, GCC, `malloc` and `free` only

### more_malloc_free
- Advanced heap management: `exit`-on-failure wrapper, manual `calloc` and `realloc`, integer range generation, and big-number multiplication
- C, GCC, `malloc`, `free`, and `exit` only

### argc_argv
- Command-line argument handling via `argc` and `argv`: argument counting, printing, validation, and arithmetic on inputs
- C, GCC, standard library allowed

### structures_typedef
- Structures and typedefs using a `struct dog` model: initialization, printing, dynamic allocation, and proper memory freeing
- C, GCC, `printf`, `malloc`, `free`, `exit`, Betty linter

### variadic_functions
- Variable-argument functions using `va_start`, `va_arg`, `va_end`: summing, printing mixed types, and 64-bit NASM assembly
- C, GCC, `<stdarg.h>`, NASM assembly

### singly_linked_lists
- Complete singly linked list library: print, count, add at head/tail, free — with Valgrind memory verification
- C, GCC, `malloc`, `free`, `exit`, `strdup`

### doubly_linked_lists
- Complete doubly linked list library: bidirectional traversal, indexed insertion and deletion, and reverse-engineering challenges
- C, GCC, `malloc`, `free`, `printf`, `exit`, Valgrind

### hash_tables
- Hash table library from scratch: djb2 hashing, chained collision handling, and a PHP-style sorted hash table
- C, GCC, full standard library, Valgrind

### file_io
- File I/O at syscall level: `open`, `read`, `write`, `close`, file copying with error handling, and ELF header parsing
- C, GCC, POSIX syscalls, `malloc`, `free`, `exit`

---

## 🛠️ Technologies Used

Every project in this repository is written in **C** and compiled with **GCC** on **Ubuntu 20.04 LTS** using the flags `-Wall -Werror -Wextra -pedantic -std=gnu89`. Code style is enforced throughout by the **Betty linter**. Selected projects also use **NASM** (64-bit assembly), **Valgrind** (memory leak detection), and **POSIX system calls** for low-level file operations. No external frameworks or dependencies are required — just a compiler, a terminal, and a growing tolerance for segfaults.

---

## ⚙️ Prerequisites

- OS: Ubuntu 20.04 LTS
- Compiler: GCC with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Linter: Betty (`betty-style.pl` and `betty-doc.pl`)
- Memory checker: Valgrind (recommended for all `malloc`/`free` projects)
- Assembler: NASM (required for the assembly task in `variadic_functions`)
- Allowed editors: `vi`, `vim`, `emacs`

---

## ▶️ Usage

```bash
git clone https://github.com/GwenP88/holbertonschool-low_level_programming.git
cd holbertonschool-low_level_programming
```

Navigate into any project directory and consult its `README.md` for task-specific compilation commands. As a general pattern:

```bash
cd hello_world
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-puts.c -o puts_demo
./puts_demo
```

Each project directory contains its own `README.md` describing what every file does, what constraints apply, and how to compile and run each program.

---

## 🤝 Contributions & Acknowledgements

A sincere thank you to the Holberton School team for a curriculum that takes "write a Hello World" and quietly turns it into "now do it with a syscall in assembly." The progression is steep, the constraints are strict, and the understanding you gain is genuinely deep. Thanks to my peers for the debugging sessions, the rubber duck conversations, and the collective appreciation for a clean Valgrind output. And eternal respect to Betty — she is strict, she is right, and she has made me a better programmer.

---

## 👤 Author

**Gwenaelle PICHOT**
- Student at Holberton School
- Repository: `holbertonschool-low_level_programming`
