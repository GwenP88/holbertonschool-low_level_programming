# more_malloc_free

> `malloc` was just the beginning — now meet `realloc`, `calloc`, and `exit`. Growing up on the heap, one block at a time.

---

## 📝 Description

This project builds directly on my `malloc_free` foundations and pushes dynamic memory management further. I implement a safer `malloc` wrapper that exits on failure, a `calloc`-style zero-initialized allocator, a bounded concatenation function, an integer range generator, and a full `realloc` implementation — all from scratch using only `malloc`, `free`, and `exit`. I also tackle an advanced big-number multiplication program that handles arbitrarily large integers as strings. Memory management is becoming second nature — or at least a slightly less terrifying first nature.

---

## 🎯 Learning Objectives

At the end of this project, I am able to explain how to use the `exit` function to terminate a program with a specific status code. I understand what `calloc` and `realloc` do, how they differ from a plain `malloc`, and how to implement equivalent behavior manually. I know how to allocate zero-initialized memory, how to resize an existing allocation while preserving its content, and how to handle the edge cases that come with each of these operations.

---

## 🛠️ Technologies Used

All programs in this project are written in **C** and compiled on **Ubuntu 20.04 LTS** using `gcc` with the flags `-Wall -Werror -Wextra -pedantic -std=gnu89`. Code style is enforced by the **Betty linter**. The only permitted C standard library functions are `malloc`, `free`, and `exit`. All other functions — including `printf`, `puts`, `calloc`, and `realloc` — are forbidden, except for `_putchar` and, in the advanced multiplication task, additional helper functions.

---

## ⚙️ Requirements

- **OS:** Ubuntu 20.04 LTS
- **Compiler:** `gcc` with options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Allowed editors:** `vi`, `vim`, `emacs`
- All files must end with a **new line**
- No errors and no warnings during compilation
- Global variables are **not allowed**
- No more than **5 functions per file** (except where explicitly stated)
- Only `malloc`, `free`, and `exit` are allowed from the standard library — `printf`, `puts`, `calloc`, `realloc`, etc. are **forbidden**
- `_putchar` is allowed; do not push `_putchar.c`
- All function prototypes and `_putchar` must be declared in `main.h`
- Do not push `main.c` test files
- Code must follow the **Betty style**

---

## 🚀 Installation

```bash
git clone https://github.com/GwenP88/holbertonschool-low_level_programming.git
cd holbertonschool-low_level_programming/more_malloc_free
```

---

## ▶️ Usage / Execution

Compile any `.c` file with its test main and run:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-malloc_checked.c -o a
./a
```

For the advanced multiplication program:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-mul.c _putchar.c -o 101-mul
./101-mul 235 17
```

Replace filenames and arguments as appropriate for each task.

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

### Task 0 - Trust no one

- Mandatory
- Write a function that allocates memory using `malloc` and causes normal process termination with exit status `98` if `malloc` fails
- Prototype: `void *malloc_checked(unsigned int b);` — only `malloc`, `free`, and `exit` allowed
- Returns a valid pointer to allocated memory on success; calls `exit(98)` on allocation failure

**Files:** `0-malloc_checked.c`

---

### Task 1 - string_nconcat

- Mandatory
- Write a function that concatenates `s1` with the first `n` bytes of `s2` into a newly allocated string; if `n` is greater than or equal to the length of `s2`, the full `s2` is used; `NULL` inputs are treated as empty strings; returns `NULL` on failure
- Prototype: `char *string_nconcat(char *s1, char *s2, unsigned int n);` — only `malloc`, `free`, and `exit` allowed
- Returns a heap-allocated null-terminated string containing `s1` followed by up to `n` bytes of `s2`

**Files:** `1-string_nconcat.c`

---

### Task 2 - _calloc

- Mandatory
- Write a function that allocates memory for an array of `nmemb` elements of `size` bytes each, zero-initializes the entire block, and returns a pointer to it; returns `NULL` if `nmemb` or `size` is `0`, or if `malloc` fails
- Prototype: `void *_calloc(unsigned int nmemb, unsigned int size);` — only `malloc`, `free`, and `exit` allowed
- Behaves like the standard `calloc` but implemented manually using `malloc`

**Files:** `2-calloc.c`

---

### Task 3 - array_range

- Mandatory
- Write a function that creates a heap-allocated integer array containing all values from `min` to `max` (inclusive), in ascending order; returns `NULL` if `min > max` or if `malloc` fails
- Prototype: `int *array_range(int min, int max);` — only `malloc`, `free`, and `exit` allowed
- Returns a pointer to a newly allocated array of `(max - min + 1)` integers, filled from `min` to `max`

**Files:** `3-array_range.c`

---

### Task 4 - _realloc

- Advanced - **This task is still in progress — my future self is on it.**
- Write a function that reallocates a memory block using `malloc` and `free`; preserves content up to the minimum of old and new sizes; handles `NULL` ptr (acts like `malloc`), `new_size == 0` (acts like `free`), and `new_size == old_size` (returns `ptr` unchanged)
- Prototype: `void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);` — only `malloc`, `free`, and `exit` allowed
- Behaves like the standard `realloc` but implemented manually; correctly frees the original block after copying

**Files:** `100-realloc.c`

---

### Task 5 - We must accept finite disappointment, but never lose infinite hope

- Advanced - **This task is still in progress — my future self is on it.**
- Write a program that multiplies two arbitrarily large positive integers passed as command-line arguments; prints `Error` and exits with status `98` if argument count is wrong or if any argument contains non-digit characters; the result may exceed standard integer ranges
- Usage: `./mul num1 num2`; more than 5 functions allowed in this file; `bc` can be used to verify results
- Outputs the correct product of two big-number strings followed by a new line, or `Error\n` with exit status `98` on invalid input

**Files:** `101-mul.c`

---

## 🔮 What’s Next

I plan to continue working on this project by completing the advanced tasks that are not done yet. This will allow me to deepen my understanding, improve my skills, and push a bit further beyond the basics (because stopping halfway is not really my style).

---

## 🤝 Contributions & Acknowledgements

Thanks to Holberton School for a project that demystifies what `calloc` and `realloc` actually do under the hood. Implementing them from scratch is the best way to stop treating them as magic. Thanks also to `exit()` — the emergency brake of dynamic memory, always there when `malloc` decides it doesn't feel like cooperating.

---

## 👤 Author

**Gwenaelle PICHOT**
- Student at Holberton School
- Track: `holbertonschool-low_level_programming`
- Project: `more_malloc_free`
