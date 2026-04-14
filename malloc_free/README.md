# malloc_free

> Stack memory is nice, but sometimes you need to build your own — `malloc` gives you the keys to the heap.

---

## 📝 Description

This project is part of my low-level programming curriculum at Holberton School. It introduces dynamic memory allocation in C: the difference between automatic (stack) and dynamic (heap) allocation, and how to use `malloc` and `free` to take manual control of memory. Through a series of functions, I allocate memory at runtime, duplicate strings, concatenate them dynamically, build 2D grids, and properly free all allocated resources. I also learn to use `valgrind` to verify that no memory is leaked. Managing your own memory: great power, great responsibility, and the occasional segfault to keep things interesting.

---

## 🎯 Learning Objectives

At the end of this project, I am able to explain the difference between automatic allocation (on the stack, managed by the compiler) and dynamic allocation (on the heap, managed manually). I understand what `malloc` and `free` do, how to use them, and why dynamic allocation is necessary when the size of data is not known at compile time or when data needs to outlive the function that created it. I also know how to use `valgrind` to detect memory leaks and ensure that every allocated block is properly freed.

---

## 🛠️ Technologies Used

All programs in this project are written in **C** and compiled on **Ubuntu 20.04 LTS** using `gcc` with the flags `-Wall -Werror -Wextra -pedantic -std=gnu89`. Code style is enforced by the **Betty linter**. The only C standard library functions permitted are `malloc` and `free` — everything else, including `printf`, `puts`, `calloc`, and `realloc`, is forbidden. Memory correctness is verified using **Valgrind**.

---

## ⚙️ Requirements

- **OS:** Ubuntu 20.04 LTS
- **Compiler:** `gcc` with options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Allowed editors:** `vi`, `vim`, `emacs`
- All files must end with a **new line**
- No errors and no warnings during compilation
- Global variables are **not allowed**
- No more than **5 functions per file**
- Only `malloc` and `free` are allowed from the standard library — `printf`, `puts`, `calloc`, `realloc`, etc. are **forbidden**
- `_putchar` is allowed; do not push `_putchar.c`
- All function prototypes and `_putchar` must be declared in `main.h`
- Do not push `main.c` test files
- Code must follow the **Betty style**

---

## 🚀 Installation

```bash
git clone https://github.com/GwenP88/holbertonschool-low_level_programming.git
cd holbertonschool-low_level_programming/malloc_free
```

To install Valgrind for memory leak checking:

```bash
sudo apt install valgrind
```

---

## ▶️ Usage / Execution

Compile any `.c` file with its test main and run:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o a
./a
```

To check for memory leaks with Valgrind:

```bash
valgrind ./4-free_grid
```

Replace filenames as appropriate for each task.

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

### Task 0 - Float like a butterfly, sting like a bee

- Mandatory
- Write a function that allocates an array of `size` chars and initializes every byte to the character `c`; returns `NULL` if `size` is `0` or if `malloc` fails
- Prototype: `char *create_array(unsigned int size, char c);` — only `malloc` and `free` allowed
- Returns a pointer to a heap-allocated array filled with `c`, or `NULL` on failure or zero size

**Files:** `0-create_array.c`

---

### Task 1 - The woman who has no imagination has no wings

- Mandatory
- Write a function that returns a pointer to a newly allocated copy of a string; returns `NULL` if `str` is `NULL` or if `malloc` fails
- Prototype: `char *_strdup(char *str);` — only `malloc` and `free` allowed
- Returns a heap-allocated duplicate of the input string, or `NULL` on failure

**Files:** `1-strdup.c`

---

### Task 2 - He who is not courageous enough to take risks will accomplish nothing in life

- Mandatory
- Write a function that concatenates two strings into a newly allocated buffer; `NULL` arguments are treated as empty strings; returns `NULL` on failure
- Prototype: `char *str_concat(char *s1, char *s2);` — only `malloc` and `free` allowed
- Returns a heap-allocated string containing `s1` followed by `s2`, null-terminated, or `NULL` on failure

**Files:** `2-str_concat.c`

---

### Task 3 - If you even dream of beating me you'd better wake up and apologize

- Mandatory
- Write a function that allocates a 2D array of integers (`width` × `height`), initialized to `0`; returns `NULL` if `width` or `height` is `0` or negative, or if `malloc` fails
- Prototype: `int **alloc_grid(int width, int height);` — only `malloc` and `free` allowed
- Returns a pointer to an array of `height` integer row pointers, each pointing to a zero-initialized row of `width` integers

**Files:** `3-alloc_grid.c`

---

### Task 4 - It's not bragging if you can back it up

- Mandatory
- Write a function that frees a 2D integer grid previously created by `alloc_grid`
- Prototype: `void free_grid(int **grid, int height);` — compiled together with `3-alloc_grid.c`
- Frees all row pointers and the pointer array itself; Valgrind reports zero leaks after execution

**Files:** `4-free_grid.c`

---

### Task 5 - It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe

- Advanced - **Not completed yet, but definitely planned (and slightly haunting me).**
- Write a function that concatenates all program arguments into a single string where each argument is followed by `\n`; returns `NULL` if `ac == 0`, `av == NULL`, or `malloc` fails
- Prototype: `char *argstostr(int ac, char **av);` — only `malloc` and `free` allowed
- Returns a heap-allocated string containing all arguments separated by `\n`, or `NULL` on failure

**Files:** `100-argstostr.c`

---

### Task 6 - I will show you how great I am

- Advanced - **Not completed yet, but definitely planned (and slightly haunting me).**
- Write a function that splits a string into an array of words (space-separated), null-terminated; returns `NULL` if `str` is `NULL`, empty, or `malloc` fails
- Prototype: `char **strtow(char *str);` — only `malloc` and `free` allowed
- Returns a heap-allocated array of heap-allocated word strings, with `NULL` as the last element

**Files:** `101-strtow.c`

---

## 🔮 What’s Next

I plan to continue working on this project by completing the advanced tasks that are not done yet. This will allow me to deepen my understanding, improve my skills, and push a bit further beyond the basics (because stopping halfway is not really my style).

---

## 🤝 Contributions & Acknowledgements

Thanks to Holberton School for this introduction to one of C's most powerful — and most dangerous — features. Allocating memory manually is a rite of passage, and Valgrind is the strict but fair judge that keeps me honest. A special thank you to `free()` for preventing this project from becoming a memory catastrophe.

---

## 👤 Author

**Gwenaelle PICHOT**
- Student at Holberton School
- Track: `holbertonschool-low_level_programming`
- Project: `malloc_free`
