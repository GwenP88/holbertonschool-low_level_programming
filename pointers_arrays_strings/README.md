# pointers_arrays_strings

> Pointers, arrays, strings — the holy trinity of C that turns confusion into confidence, one dereference at a time.

---

## 📝 Description

This repository covers three progressive projects from my low-level programming curriculum at Holberton School, all grouped under the directory `pointers_arrays_strings`. Together, they form a deep dive into one of C's most powerful (and most feared) topics: pointers and memory manipulation.

**Part 1 — Pointers, arrays and strings** introduces the fundamentals: what a pointer is, how it relates to arrays, and how to manipulate strings without relying on the standard library.

**Part 2 — More pointers, arrays and strings** builds on that foundation with more complex string functions, array operations, and character encoding challenges.

**Part 3 — Even more pointers, arrays and strings** goes further into memory manipulation, pointers to pointers, multidimensional arrays, and the most common C string library functions — reimplemented from scratch.

Each part tightens the constraints and raises the bar, but the reward is a genuinely solid understanding of how memory works in C.

---

## 🎯 Learning Objectives

By the end of these three projects, I am able to explain what pointers are, how to use them, and how they differ from arrays. I understand how strings are stored and manipulated in C, and I am comfortable with variable scope. I know how to write functions that operate directly on memory through pointers, including swapping values, copying strings, reversing content, and computing string lengths — all without using the standard library. I can also explain what pointers to pointers are and how to use them, what multidimensional arrays are and how they are laid out in memory, and which standard C library functions are most commonly used for string manipulation. Beyond the syntax, I have developed an intuition for memory: where data lives, how to reach it, and how to avoid the pitfalls that come with direct memory access.

---

## 🛠️ Technologies Used

All programs in this repository are written in **C** and compiled on **Ubuntu 20.04 LTS** using `gcc` with the flags `-Wall -Werror -Wextra -pedantic -std=gnu89`. Code style is enforced by the **Betty linter** (`betty-style.pl` and `betty-doc.pl`). The only output function available in most tasks is `_putchar` — the standard library is off-limits unless explicitly stated. Function prototypes and `_putchar` are declared in a shared header file `main.h`.

---

## ⚙️ Requirements

- **OS:** Ubuntu 20.04 LTS
- **Compiler:** `gcc` with options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Allowed editors:** `vi`, `vim`, `emacs`
- All files must end with a **new line**
- No errors and no warnings during compilation
- Global variables are **not allowed**
- No more than **5 functions per file**
- Standard library functions (`printf`, `puts`, etc.) are **forbidden** unless explicitly stated
- `_putchar` is allowed; do not push `_putchar.c` (the school's version will be used)
- `main.c` test files are for local testing only — do not push them
- All function prototypes and `_putchar` must be declared in the header file `main.h`
- Code must follow the **Betty style** (checked with `betty-style.pl` and `betty-doc.pl`)

---

## 🚀 Installation

```bash
git clone https://github.com/GwenP88/holbertonschool-low_level_programming.git
cd holbertonschool-low_level_programming/pointers_arrays_strings
```

---

## ▶️ Usage / Execution

Compile any `.c` file with its corresponding test main and run the output:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98
./0-98
```

For tasks using `_putchar`, include it in the compilation:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-puts.c -o 3-puts
./3-puts
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

---

### 📦 Part 1 — Pointers, arrays and strings

---

### Task 0 - 98 Battery st.

- Mandatory
- Write a function that takes a pointer to an `int` as parameter and updates the value it points to `98`
- Prototype: `void reset_to_98(int *n);` — no standard library
- Calling `reset_to_98(&n)` changes the value of `n` to `98` in the caller's scope

**Files:** `0-reset_to_98.c`

---

### Task 1 - Don't swap horses in crossing a stream

- Mandatory
- Write a function that swaps the values of two integers using pointers
- Prototype: `void swap_int(int *a, int *b);` — no standard library
- After calling `swap_int(&a, &b)`, the values of `a` and `b` are exchanged

**Files:** `1-swap.c`

---

### Task 2 - This report, by its very length, defends itself against the risk of being read

- Mandatory
- Write a function that returns the length of a string
- Prototype: `int _strlen(char *s);` — no standard library
- Returns the number of characters in `s` before the null terminator

**Files:** `2-strlen.c`

---

### Task 3 - I do not fear computers. I fear the lack of them

- Mandatory
- Write a function that prints a string followed by a new line to stdout
- Prototype: `void _puts(char *str);` — only `_putchar` allowed
- Outputs the full string character by character, ending with `\n`

**Files:** `3-puts.c`

---

### Task 4 - I can only go one way. I've not got a reverse gear

- Mandatory
- Write a function that prints a string in reverse followed by a new line
- Prototype: `void print_rev(char *s);` — only `_putchar` allowed
- Outputs every character of the string from last to first, then `\n`

**Files:** `4-print_rev.c`

---

### Task 5 - A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes

- Mandatory
- Write a function that reverses a string in place
- Prototype: `void rev_string(char *s);` — no standard library
- Modifies the string so that its characters appear in reverse order

**Files:** `5-rev_string.c`

---

### Task 6 - Half the lies they tell about me aren't true

- Mandatory
- Write a function that prints every other character of a string starting with the first, followed by a new line
- Prototype: `void puts2(char *str);` — only `_putchar` allowed
- Outputs characters at indices 0, 2, 4, … then `\n`

**Files:** `6-puts2.c`

---

### Task 7 - Winning is only half of it. Having fun is the other half

- Mandatory
- Write a function that prints the second half of a string followed by a new line; for odd-length strings, prints the last `(length + 1) / 2` characters
- Prototype: `void puts_half(char *str);` — only `_putchar` allowed
- Outputs the second half of the string then `\n`

**Files:** `7-puts_half.c`

---

### Task 8 - Arrays are not pointers

- Mandatory
- Write a function that prints `n` elements of an integer array, comma-space separated, followed by a new line
- Prototype: `void print_array(int *a, int n);` — `printf` is allowed for this task
- Outputs elements in storage order, formatted as `98, 402, -198, 298, -1024`

**Files:** `8-print_array.c`

---

### Task 9 - strcpy

- Mandatory
- Write a function that copies the string pointed to by `src` (including `\0`) to the buffer pointed to by `dest`; returns a pointer to `dest`
- Prototype: `char *_strcpy(char *dest, char *src);` — no standard library
- Behaves exactly like the standard `strcpy`

**Files:** `9-strcpy.c`

---

### Task 10 - Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers

- Mandatory
- Write a function that converts a string to an integer, handling leading signs and non-digit prefixes; returns `0` if no digits found
- Prototype: `int _atoi(char *s);` — no `long`, no arrays, no hard-coded special values; compiled with `-fsanitize=signed-integer-overflow`
- Handles strings like `"          ------++++++-----+++++--98"` and returns the correct signed integer

**Files:** `100-atoi.c`

---

### Task 11 - Don't hate the hacker, hate the code

- Advanced - **This task is still in progress — my future self is on it.**
- Create a program that generates random valid passwords for the `101-crackme` program
- Standard library allowed; Betty-doc required but Betty-style not enforced; may use `srand`, `rand`, `time`
- Running `./101-crackme "$(./101-keygen)"` outputs `Tada! Congrats`

**Files:** `101-keygen.c`

---

### 📦 Part 2 — More pointers, arrays and strings

---

### Task 0 - strcat

- Mandatory
- Write a function that appends the `src` string to the `dest` string, overwriting `dest`'s null terminator; returns a pointer to `dest`
- Prototype: `char *_strcat(char *dest, char *src);` — no standard library
- Behaves exactly like the standard `strcat`

**Files:** `0-strcat.c`

---

### Task 1 - strncat

- Mandatory
- Write a function that appends at most `n` bytes from `src` to `dest`; `src` does not need to be null-terminated if it contains `n` or more bytes; returns a pointer to `dest`
- Prototype: `char *_strncat(char *dest, char *src, int n);` — no standard library
- Behaves exactly like the standard `strncat`

**Files:** `1-strncat.c`

---

### Task 2 - strncpy

- Mandatory
- Write a function that copies at most `n` bytes from `src` to `dest`, padding with null bytes if necessary; returns a pointer to `dest`
- Prototype: `char *_strncpy(char *dest, char *src, int n);` — no standard library
- Behaves exactly like the standard `strncpy`

**Files:** `2-strncpy.c`

---

### Task 3 - strcmp

- Mandatory
- Write a function that compares two strings byte by byte; returns a negative, zero, or positive integer accordingly
- Prototype: `int _strcmp(char *s1, char *s2);` — no standard library
- Behaves exactly like the standard `strcmp`

**Files:** `3-strcmp.c`

---

### Task 4 - I am a kind of paranoid in reverse. I suspect people of plotting to make me happy

- Mandatory
- Write a function that reverses the content of an integer array in place
- Prototype: `void reverse_array(int *a, int n);` — no standard library
- After calling the function, the elements of `a` appear in reversed order

**Files:** `4-rev_array.c`

---

### Task 5 - Always look up

- Mandatory
- Write a function that converts all lowercase letters in a string to uppercase; returns a pointer to the result
- Prototype: `char *string_toupper(char *);` — no standard library
- All lowercase ASCII letters in the string are replaced by their uppercase equivalents

**Files:** `5-string_toupper.c`

---

### Task 6 - Expect the best. Prepare for the worst. Capitalize on what comes

- Mandatory
- Write a function that capitalizes the first letter of each word in a string; word separators are: space, tab, newline, `,`, `;`, `.`, `!`, `?`, `"`, `(`, `)`, `{`, `}`; returns a pointer to the result
- Prototype: `char *cap_string(char *);` — no standard library
- The first letter following any separator is converted to uppercase

**Files:** `6-cap_string.c`

---

### Task 7 - Mozart composed his music not for the elite, but for everybody

- Mandatory
- Write a function that encodes a string into 1337 speak: `a`/`A`→`4`, `e`/`E`→`3`, `o`/`O`→`0`, `t`/`T`→`7`, `l`/`L`→`1`; returns a pointer to the result
- Prototype: `char *leet(char *);` — only one `if`, two loops, no `switch`, no ternary
- All matching letters in the string are replaced with their leet equivalents

**Files:** `7-leet.c`

---

### Task 8 - rot13

- Advanced - **This task is still in progress — my future self is on it.**
- Write a function that encodes a string using ROT13 in place; returns a pointer to the result
- Prototype: `char *rot13(char *);` — only one `if`, two loops, no `switch`, no ternary
- Each alphabetic character is shifted 13 positions; applying the function twice restores the original string

**Files:** `100-rot13.c`

---

### Task 9 - Numbers have life; they're not just symbols on paper

- Advanced - **This task is still in progress — my future self is on it.**
- Write a function that prints an integer using only `_putchar`
- Prototype: `void print_number(int n);` — no `long`, no arrays, no pointers, no hard-coded special values
- Correctly prints any integer including `0` and negative values, followed by `\n` (called separately by the test main)

**Files:** `101-print_number.c`

---

### Task 10 - A dream doesn't become reality through magic; it takes sweat, determination and hard work

- Advanced - **This task is still in progress — my future self is on it.**
- Add exactly one line of code (at line 19, before the `;`) so the program prints `a[2] = 98` followed by a new line
- Cannot use the variable `a`, cannot modify `p`, cannot use `,`, must be a single statement
- The output is `a[2] = 98\n` produced through pointer arithmetic on `p`

**Files:** `102-magic.c`

---

### Task 11 - It is the addition of strangeness to beauty that constitutes the romantic character in art

- Advanced - **This task is still in progress — my future self is on it.**
- Write a function that adds two large positive numbers represented as strings and stores the result in a buffer; returns a pointer to the result, or `0` if the buffer is too small
- Prototype: `char *infinite_add(char *n1, char *n2, char *r, int size_r);` — no standard library
- Correctly handles arbitrarily large numbers that exceed standard integer ranges

**Files:** `103-infinite_add.c`

---

### Task 12 - Noise is a buffer, more effective than cubicles or booth walls

- Advanced - **This task is still in progress — my future self is on it.**
- Write a function that prints the content of a buffer in a formatted hex dump: 10 bytes per line, hex position prefix, hex pairs separated by space, printable ASCII or `.`
- Prototype: `void print_buffer(char *b, int size);` — standard library allowed; if `size ≤ 0`, print only `\n`
- Output is formatted exactly like a hex editor: address, hex content, and ASCII representation per line

**Files:** `104-print_buffer.c`

---

### 📦 Part 3 — Even more pointers, arrays and strings

---

### Task 0 - memset

- Mandatory
- Write a function that fills the first `n` bytes of a memory area with a constant byte `b`; returns a pointer to the memory area
- Prototype: `char *_memset(char *s, char b, unsigned int n);` — no standard library
- Behaves exactly like the standard `memset`

**Files:** `0-memset.c`

---

### Task 1 - memcpy

- Mandatory
- Write a function that copies `n` bytes from memory area `src` to memory area `dest`; returns a pointer to `dest`
- Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);` — no standard library
- Behaves exactly like the standard `memcpy`

**Files:** `1-memcpy.c`

---

### Task 2 - strchr

- Mandatory
- Write a function that returns a pointer to the first occurrence of character `c` in string `s`, or `NULL` if not found
- Prototype: `char *_strchr(char *s, char c);` — no standard library
- Behaves exactly like the standard `strchr`

**Files:** `2-strchr.c`

---

### Task 3 - strspn

- Mandatory
- Write a function that returns the length of the initial segment of `s` consisting only of bytes from `accept`
- Prototype: `unsigned int _strspn(char *s, char *accept);` — no standard library
- Behaves exactly like the standard `strspn`

**Files:** `3-strspn.c`

---

### Task 4 - strpbrk

- Mandatory
- Write a function that locates the first occurrence in string `s` of any byte from string `accept`; returns a pointer to that byte, or `NULL` if none found
- Prototype: `char *_strpbrk(char *s, char *accept);` — no standard library
- Behaves exactly like the standard `strpbrk`

**Files:** `4-strpbrk.c`

---

### Task 5 - strstr

- Mandatory
- Write a function that finds the first occurrence of substring `needle` in string `haystack`; returns a pointer to it, or `NULL` if not found
- Prototype: `char *_strstr(char *haystack, char *needle);` — no standard library
- Behaves exactly like the standard `strstr`

**Files:** `5-strstr.c`

---

### Task 6 - Chess is mental torture

- Mandatory
- Write a function that prints an 8×8 chessboard represented as a 2D array of `char`
- Prototype: `void print_chessboard(char (*a)[8]);` — only `_putchar` allowed
- Prints each row of the board character by character, one row per line

**Files:** `7-print_chessboard.c`

---

### Task 7 - The line of life is a ragged diagonal between duty and desire

- Mandatory
- Write a function that prints the sum of both diagonals of a square integer matrix
- Prototype: `void print_diagsums(int *a, int size);` — standard library allowed
- Outputs both diagonal sums separated by `, ` followed by a new line

**Files:** `8-print_diagsums.c`

---

### Task 8 - Double pointer, double fun

- Advanced
- Write a function that sets the value of a pointer to `char` using a pointer to a pointer
- Prototype: `void set_string(char **s, char *to);` — no standard library
- After calling `set_string(&s1, s0)`, `s1` points to the same string as `s0`

**Files:** `100-set_string.c`

---

### Task 9 - My primary goal of hacking was the intellectual curiosity, the seduction of adventure

- Advanced - **This task is still in progress — my future self is on it.**
- Create a file containing the exact password for the `crackme2` executable (no newline, no extra space)
- Tools such as `ltrace`, `ldd`, `gdb`, and `objdump` may be used; may require installing `libssl-dev` and `libssl1.0.0`
- Running `./crackme2` with the correct password produces the success message

**Files:** `101-crackme_password`

---

## 🔮 What’s Next

I plan to continue working on this project by completing the advanced tasks that are not done yet. This will allow me to deepen my understanding, improve my skills, and push a bit further beyond the basics (because stopping halfway is not really my style).

---

## 🤝 Contributions & Acknowledgements

A sincere thank you to the Holberton School team for crafting a three-part arc that takes you from "what even is a pointer" to "let me write my own memory manipulation functions from scratch." The progression is steep but fair. Thanks also to Betty, the strictest style enforcer I've ever met — I now write cleaner C because of her.

---

## 👤 Author

**Gwenaelle PICHOT**
- Student at Holberton School
- Track: `holbertonschool-low_level_programming`
- Project: `pointers_arrays_strings`
