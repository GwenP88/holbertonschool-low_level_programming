![Shell Basics Banner](/assets/holberton.png)

# Variadic Functions — Holberton School Project

## Introduction
This project served as an introduction to variadic functions in C. After completing several C modules, this project strengthened my understanding of how functions can handle an arbitrary number of arguments and how memory, types, and argument parsing interact at a low level.  
The learning objective was to manipulate variadic macros safely (`va_start`, `va_arg`, `va_end`) and understand when and why the `const` qualifier matters.

## Learning Outcomes
Through this project, I learned:
- What variadic functions are and when they are used.
- How to use the `va_list` type and the macros `va_start`, `va_arg`, and `va_end`.
- How to design APIs that accept variable argument lists.
- Why using `const` helps protect data integrity.
- How to build flexible printing utilities without using advanced control structures.
- How to respect strict project constraints while ensuring robust behavior.

---

## Exercises

### **0. Beauty is variable, ugliness is constant**
**Objective:** Return the sum of all parameters.  
**Expected:**  
- Function must handle any number of integers.  
- Must return 0 if `n == 0`.  
**Constraints:**  
- Uses macros of `<stdarg.h>`.  
- Must not crash with varying argument counts.

---

### **1. To be is to be the value of a variable**
**Objective:** Print integers separated by a string.  
**Expected:**  
- Print all numbers followed by a newline.  
- Print the separator only if it's not `NULL`.  
**Constraints:**  
- No extra spaces.  
- Works with positive, negative, and zero values.

---

### **2. One woman's constant is another woman's variable**
**Objective:** Print strings separated by a string.  
**Expected:**  
- Replace `NULL` strings with `(nil)`.  
- Print a newline at the end.  
**Constraints:**  
- No printing of `separator` if it is `NULL`.  
- Must handle mixed valid/NULL strings.

---

### **3. To be is a to be the value of a variable**
**Objective:** Print anything according to a type format string.  
**Expected:**  
- Handle types: `c`, `i`, `f`, `s`.  
- Ignore unsupported specifiers.  
- Replace `NULL` strings with `(nil)`.  
**Constraints:**  
- No `for`, `goto`, ternary operator, `else`, or `do...while`.  
- Max: 2 `while`, 2 `if`, 9 variables.  
- Print a newline at the end.

---

### **4. Real programmers can write assembly code in any language**  
*(Advanced)*  
**Objective:** Write a 64-bit Assembly program that prints “Hello, World”.  
**Expected:**  
- Use the `write` syscall directly.  
- Assemble with `nasm`, link with `gcc` or `ld`.  
**Constraints:**  
- No library calls.  
- Pure system call logic.

---

## Conclusion
This project consolidated my understanding of variadic functions and demonstrated how powerful and flexible they are when used correctly. It also strengthened low-level programming skills by requiring rigorous control of argument parsing and format handling, and it introduced a first contact with Assembly through a minimal system call program.
