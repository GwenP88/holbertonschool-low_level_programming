![Shell Basics Banner](/assets/holberton.png)

# C – Functions and Nested Loops (`functions_nested_loops`)

## Introduction

This Holberton School project was my first deep dive into structured C programming using functions and nested loops. The main goal was to move from “writing everything in `main`” to designing small, reusable functions with clear responsibilities, while mastering control flow, iteration patterns, and basic numeric algorithms (tables, absolute values, Fibonacci, etc.).  

Through a set of progressive exercises, I learned how to think in terms of prototypes, headers, compilation flags, and modular organization, and how to rely only on low-level output via `_putchar` instead of `printf`.

---

## Learning Objectives

At the end of this project, I should be able to explain, without using Google:

- What nested loops are and how to use them.
- What a function is and how to define and use functions in C.
- The difference between a **declaration** and a **definition** of a function.
- What a **prototype** is and why it matters for compilation.
- How variable **scope** works (local vs global, block scope).
- What the `gcc` flags do:
  - `-Wall`
  - `-Werror`
  - `-Wextra`
  - `-pedantic`
  - `-std=gnu89`
- What **header files** are and how to use them with `#include`.

---

## What I Learned With This Project

- How to organize a C project with:
  - a main header file (`main.h`),
  - multiple `.c` files,
  - and a shared `_putchar` function for character output.
- How to design and use functions with clear prototypes, return types, and parameters.
- How to build and reason about **nested loops**, especially for:
  - printing alphabets multiple times,
  - generating times tables,
  - iterating over hours and minutes of a day.
- How to implement logical checks and classification functions:
  - `_islower`, `_isalpha`, `print_sign`, `print_last_digit`.
- How to compute numeric values:
  - absolute values,
  - sums over ranges (multiples of 3 or 5),
  - Fibonacci sequences under different constraints.
- How to respect strict compilation rules:
  - no warnings with `-Wall -Werror -Wextra -pedantic -std=gnu89`,
  - clear separation between prototypes and implementations,
  - no use of forbidden standard functions when not allowed.
- How to pay attention to formatting constraints (spaces, commas, new lines) when printing tables or sequences.

---

## Exercises

### 0. `_putchar`

- **File:** `0-putchar.c`  
- **Objective:**  
  Print the string `_putchar` followed by a new line using only low-level character output.  
- **Expected behaviour:**  
  - Program prints `_putchar` then `\n`.  
  - Program returns `0`.  
- **Constraints:**  
  - Use `_putchar` for output.
  - Compile with:  
    `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar`

---

### 1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game

- **File:** `1-alphabet.c`  
- **Prototype:** `void print_alphabet(void);`  
- **Objective:**  
  Print the alphabet in lowercase followed by a new line.  
- **Expected behaviour:**  
  - Output: `abcdefghijklmnopqrstuvwxyz\n`.  
- **Constraints:**  
  - Only use `_putchar` twice in the function.
  - No use of standard I/O functions like `printf`.

---

### 2. 10 x alphabet

- **File:** `2-print_alphabet_x10.c`  
- **Prototype:** `void print_alphabet_x10(void);`  
- **Objective:**  
  Print the lowercase alphabet 10 times, each followed by a new line.  
- **Expected behaviour:**  
  - 10 lines, each containing `abcdefghijklmnopqrstuvwxyz`.  
- **Constraints:**  
  - Only use `_putchar` twice in the function.
  - Use nested loops to manage repetitions.

---

### 3. `islower`

- **File:** `3-islower.c`  
- **Prototype:** `int _islower(int c);`  
- **Objective:**  
  Check if a character is lowercase.  
- **Expected behaviour:**  
  - Return `1` if `c` is lowercase.  
  - Return `0` otherwise.  
- **Constraints:**  
  - Do not use the standard `islower` from `<ctype.h>`.
  - Implementation must rely on character ranges.

---

### 4. `isalpha`

- **File:** `4-isalpha.c`  
- **Prototype:** `int _isalpha(int c);`  
- **Objective:**  
  Check if a character is an alphabetic letter (lowercase or uppercase).  
- **Expected behaviour:**  
  - Return `1` if `c` is a letter.  
  - Return `0` otherwise.  
- **Constraints:**  
  - Do not use the standard `isalpha` from `<ctype.h>`.
  - Use ASCII ranges to determine validity.

---

### 5. Sign

- **File:** `5-sign.c`  
- **Prototype:** `int print_sign(int n);`  
- **Objective:**  
  Print the sign of an integer and return a corresponding value.  
- **Expected behaviour:**  
  - If `n > 0` → print `+` and return `1`.  
  - If `n == 0` → print `0` and return `0`.  
  - If `n < 0` → print `-` and return `-1`.  
- **Constraints:**  
  - Use `_putchar` for output.
  - Respect the exact characters and return values.

---

### 6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you

- **File:** `6-abs.c`  
- **Prototype:** `int _abs(int);`  
- **Objective:**  
  Compute the absolute value of an integer.  
- **Expected behaviour:**  
  - Return a non-negative integer representing `|n|`.  
- **Constraints:**  
  - Do not use the standard `abs` function.
  - Work only with integers.

---

### 7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important

- **File:** `7-print_last_digit.c`  
- **Prototype:** `int print_last_digit(int);`  
- **Objective:**  
  Print and return the last digit of an integer.  
- **Expected behaviour:**  
  - Print the last digit as a positive digit.  
  - Return this digit as an `int`.  
- **Constraints:**  
  - Manage negative numbers correctly.
  - Use `_putchar` for printing.

---

### 8. I'm federal agent Jack Bauer, and today is the longest day of my life

- **File:** `8-24_hours.c`  
- **Prototype:** `void jack_bauer(void);`  
- **Objective:**  
  Print every minute of the day from `00:00` to `23:59`.  
- **Expected behaviour:**  
  - Output all times in the format `HH:MM`, one per line.  
  - Total of `1440` lines.  
- **Constraints:**  
  - Use nested loops (hours, minutes).
  - Use `_putchar` for output.

---

### 9. Learn your times table

- **File:** `9-times_table.c`  
- **Prototype:** `void times_table(void);`  
- **Objective:**  
  Print the 9 times table starting from 0.  
- **Expected behaviour:**  
  - Print a formatted table from `0 × 0` to `9 × 9`.  
  - Respect alignment and spacing exactly as in the example.  
- **Constraints:**  
  - Use nested loops (rows and columns).
  - Use `_putchar` for character-level formatting.

---

### 10. `a + b`

- **File:** `10-add.c`  
- **Prototype:** `int add(int, int);`  
- **Objective:**  
  Add two integers and return the result.  
- **Expected behaviour:**  
  - Return `a + b` as an integer.  
- **Constraints:**  
  - Simple arithmetic, no side effects.
  - Intended to be reused by other code.

---

### 11. 98 Battery Street, the OG

- **File:** `11-print_to_98.c`  
- **Prototype:** `void print_to_98(int n);`  
- **Objective:**  
  Print all natural numbers from `n` to `98`, followed by a new line.  
- **Expected behaviour:**  
  - Numbers are separated by `", "` (comma + space).  
  - Numbers are printed in order:
    - Increment from `n` up to `98`, or
    - Decrement from `n` down to `98`.  
  - The last printed number is always `98`.  
- **Constraints:**  
  - Standard library use is allowed for printing if desired.
  - Handle both positive and negative starting values.

---

### 12. The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself  *(advanced)*

- **File:** `100-times_table.c`  
- **Prototype:** `void print_times_table(int n);`  
- **Objective:**  
  Print the `n` times table starting with `0`.  
- **Expected behaviour:**  
  - For each valid `n`, print a properly formatted table from `0` to `n`.  
  - Respect spacing and alignment exactly as in the example.  
- **Constraints:**  
  - Only print anything if `0 <= n <= 15`.  
  - Use nested loops and `_putchar` for formatting.

---

### 13. Nature made the natural numbers; All else is the work of women  *(advanced)*

- **File:** `101-natural.c`  
- **Objective:**  
  Compute and print the sum of all multiples of 3 or 5 below 1024 (excluded).  
- **Expected behaviour:**  
  - Print the sum followed by a new line.  
- **Constraints:**  
  - Standard library allowed for printing.
  - Iterate from 0 up to 1023 and accumulate multiples of 3 or 5.

---

### 14. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A  *(advanced)*

- **File:** `102-fibonacci.c`  
- **Objective:**  
  Print the first 50 Fibonacci numbers, starting with 1 and 2.  
- **Expected behaviour:**  
  - Numbers separated by comma and space: `", "`.  
  - End with a new line.  
- **Constraints:**  
  - Standard library allowed for output.
  - Correctly handle growing values within standard integer limits.

---

### 15. Even Liber Abbaci  *(advanced)*

- **File:** `103-fibonacci.c`  
- **Objective:**  
  Compute and print the sum of even-valued Fibonacci terms not exceeding 4,000,000.  
- **Expected behaviour:**  
  - Print the sum followed by a new line.  
- **Constraints:**  
  - Standard library allowed for output.
  - Generate Fibonacci sequence until terms exceed 4,000,000.

---

### 16. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+  *(advanced)*

- **File:** `104-fibonacci.c`  
- **Objective:**  
  Print the first 98 Fibonacci numbers, starting with 1 and 2.  
- **Expected behaviour:**  
  - Numbers separated by comma and space: `", "`.  
  - End with a new line.  
- **Constraints:**  
  - Only the standard library is allowed (no GMP or other big integer libraries).  
  - Forbidden:
    - `long long`
    - `malloc`
    - pointers
    - arrays/tables
    - structures  
  - No hard-coding of Fibonacci numbers (except initial `1` and `2`).

---

## Conclusion

This project consolidated my foundations in C: writing and organizing functions, mastering nested loops, understanding numeric logic, and respecting strict compilation and style rules. It also introduced more “algorithmic” problems (sums over ranges, Fibonacci) that prepared me for more complex low-level programming challenges and future Holberton projects.
