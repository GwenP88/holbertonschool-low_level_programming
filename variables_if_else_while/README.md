![Shell Basics Banner](/assets/holberton.png)

# Variables, if, else, while – C basics

This project is my first deep dive into C control flow and basic data handling.  
Through a series of short programs, I practiced using operators, conditions, loops, and `putchar`/`printf` to manage numbers and characters.  
The goal was to become comfortable reading and writing small C programs without relying on external help, and to understand how the machine “sees” numbers, characters, and boolean logic.

---

## Learning objectives

By the end of this project, I should be able to:

- Use arithmetic operators in C and understand how they behave on integers.
- Use logical / boolean operators to combine conditions.
- Use relational operators to compare values.
- Know which values are treated as “true” and “false” in C.
- Write and combine `if` / `if ... else` statements.
- Add and use comments to document code.
- Declare variables of type `char`, `int`, `unsigned int`.
- Assign values to variables and update them inside a loop.
- Print `char`, `int` and `unsigned int` values with `printf`.
- Use the `while` loop to repeat instructions under a condition.
- Use variables inside a `while` loop to control iteration.
- Print values with both `printf` and `putchar`.
- Understand the basics of the ASCII character set.
- Know the purpose of the `gcc` flags `-m32` and `-m64`.

---

## What I learned with this project

- How to combine conditions and operators to decide what to print.
- How to extract digits from an integer (e.g. the last digit) with modulo and division.
- How characters and integers are related through the ASCII table.
- How to iterate over a range of letters or digits using loops and `putchar`.
- How to build formatted outputs that follow strict specifications.
- How to respect constraints (limited calls to `putchar`, no `char` variables, all code in `main`, etc.).
- How to read and adapt starter code without breaking the random number generation logic.

---

## Repository structure

- **GitHub repository:** `holbertonschool-low_level_programming`
- **Directory:** `variables_if_else_while/`
- **Main files:**  
  `0-positive_or_negative.c` to `9-print_comb.c`,  
  `100-print_comb3.c`, `101-print_comb4.c`, `102-print_comb5.c`.

---

## Tasks

### 0. Positive anything is better than negative nothing
- **File:** `0-positive_or_negative.c`  
- **Objective:**  
  Determine whether a randomly generated integer `n` is positive, zero, or negative.
- **Expected behavior:**  
  Print:  
  `<number> is positive`  
  or  
  `<number> is zero`  
  or  
  `<number> is negative`  
  followed by a newline, depending on the value of `n`.
- **Constraints:**  
  - Use the provided random initialization of `n` without modifying it.  
  - Output format must match exactly the specification.

---

### 1. The last digit
- **File:** `1-last_digit.c`  
- **Objective:**  
  Extract and analyze the last digit of a random integer `n`.
- **Expected behavior:**  
  Print:  
  `Last digit of <n> is <last_digit> and is greater than 5`  
  or  
  `Last digit of <n> is <last_digit> and is 0`  
  or  
  `Last digit of <n> is <last_digit> and is less than 6 and not 0`  
  followed by a newline.
- **Constraints:**  
  - Use the provided code to generate `n`.  
  - Do not modify the random initialization logic.  
  - Respect the exact phrasing and spacing.

---

### 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
- **File:** `2-print_alphabet.c`  
- **Objective:**  
  Print the lowercase alphabet from `a` to `z`.
- **Expected behavior:**  
  Output: `abcdefghijklmnopqrstuvwxyz` followed by a newline.
- **Constraints:**  
  - Only `putchar` is allowed (no `printf`, `puts`, etc.).  
  - All code must be inside `main`.  
  - `putchar` may only be used twice.

---

### 3. alphABET
- **File:** `3-print_alphabets.c`  
- **Objective:**  
  Print the alphabet in lowercase, then in uppercase, on a single line.
- **Expected behavior:**  
  Output: `abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ` followed by a newline.
- **Constraints:**  
  - Only `putchar` is allowed.  
  - All code must be inside `main`.  
  - `putchar` may only be used three times.

---

### 4. When I was having that alphabet soup, I never thought that it would pay off
- **File:** `4-print_alphabt.c`  
- **Objective:**  
  Print the lowercase alphabet except the letters `q` and `e`.
- **Expected behavior:**  
  Output: `abcdfghijklmnoprstuvwxyz` followed by a newline.
- **Constraints:**  
  - Only `putchar` is allowed.  
  - All code must be inside `main`.  
  - `putchar` may only be used twice.  
  - Letters `e` and `q` must not appear in the output.

---

### 5. Numbers
- **File:** `5-print_numbers.c`  
- **Objective:**  
  Print all single-digit numbers of base 10 starting from 0.
- **Expected behavior:**  
  Output: `0123456789` followed by a newline.
- **Constraints:**  
  - All code must be inside `main`.

---

### 6. Numberz
- **File:** `6-print_numberz.c`  
- **Objective:**  
  Print all single-digit base-10 numbers using integer logic instead of character variables.
- **Expected behavior:**  
  Output: `0123456789` followed by a newline.
- **Constraints:**  
  - No variable of type `char` is allowed.  
  - Only `putchar` is allowed.  
  - `putchar` may only be used twice.  
  - All code must be inside `main`.

---

### 7. Smile in the mirror
- **File:** `7-print_tebahpla.c`  
- **Objective:**  
  Print the lowercase alphabet in reverse order.
- **Expected behavior:**  
  Output: `zyxwvutsrqponmlkjihgfedcba` followed by a newline.
- **Constraints:**  
  - Only `putchar` is allowed.  
  - All code must be inside `main`.  
  - `putchar` may only be used twice.

---

### 8. Hexadecimal
- **File:** `8-print_base16.c`  
- **Objective:**  
  Print all numbers of base 16 in lowercase (digits then letters).
- **Expected behavior:**  
  Output: `0123456789abcdef` followed by a newline.
- **Constraints:**  
  - Only `putchar` is allowed.  
  - All code must be inside `main`.  
  - `putchar` may only be used three times.

---

### 9. Patience, persistence and perspiration make an unbeatable combination for success
- **File:** `9-print_comb.c`  
- **Objective:**  
  Print all possible combinations of single-digit numbers.
- **Expected behavior:**  
  Output:  
  `0, 1, 2, 3, 4, 5, 6, 7, 8, 9`  
  followed by a newline, with the exact same spacing and commas.
- **Constraints:**  
  - Combinations must be printed in ascending order.  
  - Numbers must be separated by `, ` (comma and space).  
  - Only `putchar` is allowed.  
  - `putchar` may be used at most four times in the code.  
  - No variable of type `char`.  
  - All code must be inside `main`.

---

### 10. Inventing is a combination of brains and materials. The more brains you use, the less material you need
- **File:** `100-print_comb3.c`  
- **Objective:**  
  Print all possible different combinations of two digits.
- **Expected behavior:**  
  - Only the smallest combination for each pair appears (e.g. `01`, not `10`).  
  - Output example starts:  
    `01, 02, 03, ..., 89`  
  - Numbers are printed in ascending order, with exactly two digits per combination.
- **Constraints:**  
  - Digits in a pair must be different.  
  - Combinations are separated by `, ` (comma and space).  
  - Only `putchar` is allowed.  
  - `putchar` may be used at most five times.  
  - No variable of type `char`.  
  - All code must be inside `main`.

---

### 11. The success combination in business is: Do what you do better... and: do more of what you do...
- **File:** `101-print_comb4.c`  
- **Objective:**  
  Print all possible different combinations of three digits.
- **Expected behavior:**  
  - Only the smallest permutation for each triple appears (e.g. `012`, not `120` or `210`).  
  - Output example starts:  
    `012, 013, 014, ..., 789`  
  - Combinations are printed in ascending order.
- **Constraints:**  
  - The three digits must all be different.  
  - Combinations are separated by `, ` (comma and space).  
  - Only `putchar` is allowed.  
  - `putchar` may be used at most six times.  
  - No variable of type `char`.  
  - All code must be inside `main`.

---

### 12. Software is eating the World
- **File:** `102-print_comb5.c`  
- **Objective:**  
  Print all possible combinations of two two-digit numbers.
- **Expected behavior:**  
  - Numbers range from `00` to `99`.  
  - Each pair is printed as `ab cd` with a space between the two numbers.  
  - All numbers are printed with two digits (e.g. `01`, not `1`).  
  - Combinations are printed in ascending order.  
  - Each combination is separated by `, ` (comma and space).  
  - Example fragment:  
    `00 01, 00 02, ..., 98 99`
- **Constraints:**  
  - `00 01` and `01 00` are treated as the same combination, only the smallest is printed.  
  - Only `putchar` is allowed.  
  - `putchar` may be used at most eight times.  
  - No variable of type `char`.  
  - All code must be inside `main`.

---

## Conclusion

This project gave me a solid foundation in C basics: operators, conditions, loops, and character handling.  
By working through each small task under strict constraints, I learned to think carefully about control flow, output formatting, and how integers and characters are represented in memory.  
These skills are essential for the following C projects, where I will build more complex logic on top of these fundamentals.
