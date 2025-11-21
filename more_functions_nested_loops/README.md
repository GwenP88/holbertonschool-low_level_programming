![Shell Basics Banner](/assets/holberton.png)

# C – More Functions and Nested Loops

## Introduction

This Holberton School project extended my work on functions and nested loops in C. After the previous `functions_nested_loops` project, this one pushed me further with more complex patterns: character classification, numeric formatting, drawing shapes in the terminal, and simple algorithmic problems (FizzBuzz, largest prime factor, printing integers without standard I/O formatting).  

The focus was on reusing basic tools (_putchar, loops, conditionals) to build higher-level behaviors, while respecting strict C constraints and compilation flags.

---

## Learning Objectives

At the end of this project, I should be able to explain, without using Google:

- What nested loops are and how to use them.
- What a function is and how to use functions in C.
- The difference between a **declaration** and a **definition** of a function.
- What a function **prototype** is and why it is needed.
- How **scope** of variables works (local vs. global, block scope).
- What the `gcc` flags do:
  - `-Wall`
  - `-Werror`
  - `-Wextra`
  - `-pedantic`
  - `-std=gnu89`
- What **header files** are and how to use them with `#include`.

---

## What I Learned With This Project

- How to design and implement **utility functions** for:
  - Character classification: `_isupper`, `_isdigit`.
  - Arithmetic: `mul`, `print_number`.
- How to control and format numeric output using only `_putchar`:
  - Printing ranges of numbers.
  - Building multi-line patterns with nested loops.
- How to draw **ASCII shapes** in the terminal:
  - Horizontal lines.
  - Diagonals.
  - Squares and triangles with aligned spacing.
- How to solve small algorithmic problems:
  - FizzBuzz between 1 and 100.
  - Finding the largest prime factor of a large number.
- How to handle **constraints** without shortcuts:
  - Limited use of `_putchar`.
  - No arrays, pointers, or `long` in some tasks.
  - No hard-coded special values.
- How to organize C code with:
  - A shared header (`main.h`) for prototypes.
  - Separate `.c` files per function.
  - Strict compilation rules and flags.

---

## Exercises

### 0. `isupper`

- **File:** `0-isupper.c`  
- **Directory:** `more_functions_nested_loops`  
- **Prototype:** `int _isupper(int c);`  
- **Objective:**  
  Implement a function that checks if a character is uppercase.  
- **Expected behaviour:**  
  - Return `1` if `c` is an uppercase letter (`'A'`–`'Z'`).  
  - Return `0` otherwise.  
- **Constraints:**  
  - Do not use the standard `isupper` from `<ctype.h>`.  
  - Follow the function prototype in `main.h`.

---

### 1. `isdigit`

- **File:** `1-isdigit.c`  
- **Directory:** `more_functions_nested_loops`  
- **Prototype:** `int _isdigit(int c);`  
- **Objective:**  
  Implement a function that checks if a character is a digit (`0`–`9`).  
- **Expected behaviour:**  
  - Return `1` if `c` is a digit.  
  - Return `0` otherwise.  
- **Constraints:**  
  - Do not use the standard `isdigit` from `<ctype.h>`.  
  - Respect the prototype from `main.h`.

---

### 2. Collaboration is multiplication

- **File:** `2-mul.c`  
- **Directory:** `more_functions_nested_loops`  
- **Prototype:** `int mul(int a, int b);`  
- **Objective:**  
  Write a function that multiplies two integers.  
- **Expected behaviour:**  
  - Return the product `a * b` as an `int`.  
- **Constraints:**  
  - Simple pure function: no side effects, just return the result.

---

### 3. The numbers speak for themselves

- **File:** `3-print_numbers.c`  
- **Directory:** `more_functions_nested_loops`  
- **Prototype:** `void print_numbers(void);`  
- **Objective:**  
  Print the numbers from `0` to `9`, followed by a new line.  
- **Expected behaviour:**  
  - Output: `0123456789\n`.  
- **Constraints:**  
  - You can only use `_putchar` **twice** in your code.
  - Use a loop to iterate from `0` to `9`.

---

### 4. I believe in numbers and signs

- **File:** `4-print_most_numbers.c`  
- **Directory:** `more_functions_nested_loops`  
- **Prototype:** `void print_most_numbers(void);`  
- **Objective:**  
  Print the numbers from `0` to `9`, except `2` and `4`, followed by a new line.  
- **Expected behaviour:**  
  - Output: `01356789\n`.  
- **Constraints:**  
  - You can only use `_putchar` **twice** in your code.
  - Skip `2` and `4` using conditionals.

---

### 5. Numbers constitute the only universal language

- **File:** `5-more_numbers.c`  
- **Directory:** `more_functions_nested_loops`  
- **Prototype:** `void more_numbers(void);`  
- **Objective:**  
  Print 10 times the numbers from `0` to `14`, followed by a new line.  
- **Expected behaviour:**  
  - 10 lines.
  - Each line: `01234567891011121314`.  
- **Constraints:**  
  - You can only use `_putchar` **three** times in your code.
  - Use nested loops:
    - Outer loop: 10 iterations.
    - Inner loop: `0` to `14`, managing two-digit numbers with `_putchar`.

---

### 6. The shortest distance between two points is a straight line

- **File:** `6-print_line.c`  
- **Directory:** `more_functions_nested_loops`  
- **Prototype:** `void print_line(int n);`  
- **Objective:**  
  Draw a straight horizontal line using the `_` character.  
- **Expected behaviour:**  
  - If `n > 0`, print `_` `n` times followed by `\n`.  
  - If `n <= 0`, print only `\n`.  
- **Constraints:**  
  - You can only use `_putchar` to print.
  - Use a simple loop for the `_` characters.

---

### 7. I feel like I am diagonally parked in a parallel universe

- **File:** `7-print_diagonal.c`  
- **Directory:** `more_functions_nested_loops`  
- **Prototype:** `void print_diagonal(int n);`  
- **Objective:**  
  Draw a diagonal line using the `\` character.  
- **Expected behaviour:**  
  - For each line `i` (starting at 0), print `i` spaces, then `\`, then `\n`.  
  - If `n <= 0`, print only `\n`.  
- **Constraints:**  
  - Only `_putchar` is allowed.
  - Use nested loops: one for lines, one for spaces.

---

### 8. You are so much sunshine in every square inch

- **File:** `8-print_square.c`  
- **Directory:** `more_functions_nested_loops`  
- **Prototype:** `void print_square(int size);`  
- **Objective:**  
  Print a square made of `#` characters.  
- **Expected behaviour:**  
  - If `size > 0`, print `size` lines, each with `size` `#` characters.  
  - If `size <= 0`, print only `\n`.  
- **Constraints:**  
  - Only `_putchar` is allowed.
  - Use nested loops to build rows and columns.

---

### 9. Fizz-Buzz

- **File:** `9-fizz_buzz.c`  
- **Directory:** `more_functions_nested_loops`  
- **Objective:**  
  Implement the classic FizzBuzz program: print the numbers from `1` to `100`, applying substitutions.  
- **Expected behaviour:**  
  - For multiples of 3: print `Fizz`.  
  - For multiples of 5: print `Buzz`.  
  - For multiples of both 3 and 5: print `FizzBuzz`.  
  - Otherwise: print the number.  
  - All tokens are separated by a space.
  - End with a new line.  
- **Constraints:**  
  - You are allowed to use the standard library (e.g. `printf`).
  - No extra punctuation; exactly one space between outputs.

---

### 10. Triangles

- **File:** `10-print_triangle.c`  
- **Directory:** `more_functions_nested_loops`  
- **Prototype:** `void print_triangle(int size);`  
- **Objective:**  
  Print a right-aligned triangle made of `#` characters.  
- **Expected behaviour:**  
  - If `size > 0`, print `size` lines:
    - On line `i` (1-based), print spaces then `#` so that the triangle is right-aligned.  
  - If `size <= 0`, print only `\n`.  
- **Constraints:**  
  - Only `_putchar` is allowed.
  - Use nested loops: one for lines, one for spaces, one for `#` characters.

---

### 11. The problem of distinguishing prime numbers from composite numbers…

- **File:** `100-prime_factor.c`  
- **Directory:** `more_functions_nested_loops`  
- **Objective:**  
  Find and print the largest prime factor of the number `612852475143`, followed by a new line.  
- **Expected behaviour:**  
  - Compute the prime factors of `612852475143`.  
  - Print the largest one, then `\n`.  
- **Constraints:**  
  - You are allowed to use the standard library.
  - The program is compiled with:  
    `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm`
  - Use an efficient factorization strategy to handle such a big number.

---

### 12. Numbers have life; they're not just symbols on paper

- **File:** `101-print_number.c`  
- **Directory:** `more_functions_nested_loops`  
- **Prototype:** `void print_number(int n);`  
- **Objective:**  
  Print an integer using only `_putchar`.  
- **Expected behaviour:**  
  - Handle positive numbers, zero, and negative numbers.  
  - Print the decimal representation of `n`, followed by no extra spaces or newline (caller decides).  
- **Constraints:**  
  - Only `_putchar` can be used for output.
  - You are not allowed to use:
    - `long`
    - arrays
    - pointers
  - You are not allowed to hard-code special values (like `INT_MIN`).
  - Implementation must rely on arithmetic and recursion or iterative decomposition.

---

## Conclusion

This `more_functions_nested_loops` project solidified my understanding of functions, nested loops, and output formatting in C. I learned how to transform simple building blocks (`_putchar`, loops, conditionals) into reusable tools for numeric logic, pattern printing, and basic algorithms. These skills are directly transferable to larger low-level projects, where I'll need to manage more complex flows while still respecting strict constraints on the language and toolchain.

