# functions_nested_loops

> Loops within loops, functions within functions — welcome to the rabbit hole of C programming.

---

## 📝 Description

This project is my introduction to the world of functions and nested loops in C. I explored how to structure code into reusable functions, how to use loops to iterate intelligently, and how to tie everything together through proper header files and prototypes. From printing alphabets to computing Fibonacci sequences, this project covers a solid range of fundamental C programming patterns — all while respecting strict compilation constraints and coding style rules.

---

## 🎯 Learning Objectives

By completing this project, I am able to explain what nested loops are and how to use them effectively to solve problems that require multi-level iteration. I understand what a function is, how to define and call one, and I can clearly articulate the difference between a function declaration and its definition. I know what a prototype is and why it matters in C. I have a solid grasp of variable scope, and I understand what the `gcc` flags `-Wall -Werror -pedantic -Wextra -std=gnu89` do and why they make me write better code. Finally, I am able to use header files with `#include` and know how to properly organize prototypes within them.

---

## 🛠️ Technologies Used

This project is written entirely in **C** and compiled using **GCC** on **Ubuntu 20.04 LTS**. The code follows the **Betty style** (enforced via `betty-style.pl` and `betty-doc.pl`) and is compiled with the flags `-Wall -Werror -Wextra -pedantic -std=gnu89`. No external libraries are used, except where explicitly authorized.

---

## ⚙️ Requirements

- OS: Ubuntu 20.04 LTS
- Compiler: `gcc` with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files must end with a new line
- Code must follow the **Betty** style
- No global variables allowed
- No more than 5 functions per file
- Standard library functions (`printf`, `puts`, etc.) are **forbidden** unless explicitly stated
- `_putchar` is allowed
- All function prototypes (including `_putchar`) must be in `main.h`
- `main.c` test files are not pushed to the repo

---

## 🚀 Installation

```bash
git clone https://github.com/GwenP88/holbertonschool-low_level_programming.git
cd holbertonschool-low_level_programming/functions_nested_loops
```

---

## ▶️ Usage / Execution

Each task can be compiled and run using `gcc`. Example for task 1:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet
./1-alphabet
```

Refer to each task's compilation command for the correct file names and flags.

---

## 📊 Project Progress

<p align="center">
<img src="assets/progress_barre_100.gif" alt="Mandatory tasks progress" width="80%">
</p>

<p align="center">
<sub>Mandatory tasks completion: 100% --- Advanced tasks completion: 100%</sub>
</p>

---

## ✨ Features

### Task 0 - _putchar

- Mandatory
- Write a program that prints `_putchar` followed by a new line
- The program must return `0`
- Prints `_putchar` to stdout and exits with code 0

**Files:** `0-putchar.c`

---

### Task 1 - I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game

- Mandatory
- Write a function that prints the alphabet in lowercase followed by a new line
- Prototype: `void print_alphabet(void);` — only `_putchar` may be used, at most twice
- Prints `abcdefghijklmnopqrstuvwxyz` followed by a newline

**Files:** `1-alphabet.c`

---

### Task 2 - 10 x alphabet

- Mandatory
- Write a function that prints the alphabet 10 times in lowercase followed by a new line
- Prototype: `void print_alphabet_x10(void);` — only `_putchar` may be used, at most twice
- Prints the full lowercase alphabet 10 times, each on its own line

**Files:** `2-print_alphabet_x10.c`

---

### Task 3 - islower

- Mandatory
- Write a function that checks for a lowercase character
- Prototype: `int _islower(int c);` — returns `1` if lowercase, `0` otherwise
- Returns the correct integer value based on whether the character is lowercase

**Files:** `3-islower.c`

---

### Task 4 - isalpha

- Mandatory
- Write a function that checks for an alphabetic character
- Prototype: `int _isalpha(int c);` — returns `1` if letter (upper or lower), `0` otherwise
- Returns the correct integer value based on whether the character is alphabetic

**Files:** `4-isalpha.c`

---

### Task 5 - Sign

- Mandatory
- Write a function that prints the sign of a number
- Prototype: `int print_sign(int n);` — prints `+`, `0`, or `-` and returns `1`, `0`, or `-1`
- Correctly prints the sign character and returns the corresponding integer value

**Files:** `5-sign.c`

---

### Task 6 - There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you

- Mandatory
- Write a function that computes the absolute value of an integer
- Prototype: `int _abs(int);`
- Returns the absolute value of the given integer

**Files:** `6-abs.c`

---

### Task 7 - There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important

- Mandatory
- Write a function that prints the last digit of a number
- Prototype: `int print_last_digit(int);` — returns the value of the last digit
- Prints the last digit and returns its integer value

**Files:** `7-print_last_digit.c`

---

### Task 8 - I'm federal agent Jack Bauer, and today is the longest day of my life

- Mandatory
- Write a function that prints every minute of the day from `00:00` to `23:59`
- Prototype: `void jack_bauer(void);`
- Prints all 1440 minutes of the day in `HH:MM` format, each on its own line

**Files:** `8-24_hours.c`

---

### Task 9 - Learn your times table

- Mandatory
- Write a function that prints the 9 times table starting with 0
- Prototype: `void times_table(void);` — formatted output with aligned columns
- Prints the full 9×9 multiplication table with proper spacing

**Files:** `9-times_table.c`

---

### Task 10 - a + b

- Mandatory
- Write a function that adds two integers and returns the result
- Prototype: `int add(int, int);`
- Returns the sum of the two given integers

**Files:** `10-add.c`

---

### Task 11 - 98 Battery Street, the OG

- Mandatory
- Write a function that prints all natural numbers from `n` to `98` followed by a new line
- Prototype: `void print_to_98(int n);` — numbers separated by `, `, standard library allowed
- Prints numbers in order from `n` to `98` (or down from `n` if `n > 98`), separated by commas

**Files:** `11-print_to_98.c`

---

### Task 12 - The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself

- Advanced
- Write a function that prints the `n` times table starting with 0
- Prototype: `void print_times_table(int n);` — does nothing if `n < 0` or `n > 15`
- Prints the n×n multiplication table with aligned formatting

**Files:** `100-times_table.c`

---

### Task 13 - Nature made the natural numbers; All else is the work of women

- Advanced
- Write a program that computes and prints the sum of all multiples of 3 or 5 below 1024
- Standard library allowed
- Prints the correct sum followed by a new line

**Files:** `101-natural.c`

---

### Task 14 - In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A

- Advanced
- Write a program that prints the first 50 Fibonacci numbers starting with 1 and 2
- Numbers separated by `, ` — standard library allowed
- Prints 50 Fibonacci numbers on one line followed by a new line

**Files:** `102-fibonacci.c`

---

### Task 15 - Even Liber Abbaci

- Advanced
- Write a program that finds and prints the sum of even-valued Fibonacci terms not exceeding 4,000,000
- Standard library allowed
- Prints the correct even Fibonacci sum followed by a new line

**Files:** `103-fibonacci.c`

---

### Task 16 - In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+

- Advanced
- Write a program that finds and prints the first 98 Fibonacci numbers starting with 1 and 2
- No `long long`, no `malloc`, no arrays, no structures, no hard-coded values (except 1 and 2), no external libraries (no GMP)
- Prints 98 Fibonacci numbers separated by `, `, followed by a new line

**Files:** `104-fibonacci.c`

---

## 🤝 Contributions & Acknowledgements

A huge thank you to the Holberton School staff and my fellow students who didn't judge me when I spent 45 minutes debugging a missing semicolon. Special shoutout to Betty — the strictest linter I've ever met, but fair.

---

## 👤 Author

**Gwenaelle PICHOT**
- Student at Holberton School
- Track: holbertonschool-low_level_programming
- Project: functions_nested_loops
