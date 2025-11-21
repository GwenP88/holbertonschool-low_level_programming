![Shell Basics Banner](/assets/holberton.png)

# C – Hello, World (`hello_world`)

## Introduction

This Holberton School project was my first contact with the C toolchain and the full compilation pipeline. I learned how `gcc` transforms a simple `main.c` file into preprocessed code, object files, assembly, and finally an executable. I also practiced the three main output functions in C (`puts`, `printf`, `putchar`), how to inspect the size of types with `sizeof`, and how to respect the official C coding style with Betty.  

This project gave me a concrete view of what happens behind the scenes when we type `gcc main.c`, and how to structure, compile, and run simple C programs in a clean, controlled way.

---

## Learning Objectives

At the end of this project, I should be able to explain, without using Google:

- Why C programming is awesome.
- Who invented C.
- Who Dennis Ritchie, Brian Kernighan and Linus Torvalds are.
- What happens when you type `gcc main.c`.
- What an entry point is.
- What `main` is and how it works.
- How to print text using `printf`, `puts` and `putchar`.
- How to get the size of a specific type using the unary operator `sizeof`.
- How to compile using `gcc`.
- What the default program name is when compiling with `gcc`.
- What the official C coding style is and how to check code with `betty-style`.
- How to find the right header to include when using a standard library function.

---

## What I Learned With This Project

- How the compilation pipeline is structured:
  - Preprocessing → compilation → assembly → linking.
  - The difference between `.c`, `.i`, `.o`, `.s` and the final executable.
- How to:
  - Run only the preprocessor on a C file and inspect the generated output.
  - Compile without linking to produce an object file.
  - Generate assembly in AT&T and Intel syntax.
  - Produce an executable with a custom name.
- How to write simple C programs that:
  - Use `puts`, `printf` and `putchar` correctly.
  - Print exactly specified strings, including punctuation and new lines.
  - Print sizes of types using `sizeof`, and understand that results depend on the architecture (32-bit vs 64-bit).
- How to respect constraints:
  - Return `0` or `1` depending on the exercise requirements.
  - Print to `stdout` vs `stderr` correctly.
  - Avoid using forbidden functions (`printf` / `puts` in some tasks).
  - Compile with strict flags (`-Wall -Werror -Wextra -pedantic -std=gnu89`) without warnings.
- How to document and share technical understanding:
  - Write and publish a blog post explaining what happens when you type `gcc main.c`.
  - Share it on Medium and LinkedIn to practice technical communication in English.

---

## Exercises

### 0. Preprocessor

- **File:** `0-preprocessor`  
- **Directory:** `hello_world`  
- **Type:** Shell script  
- **Objective:**  
  Run a C file through the preprocessor and save the result into another file.  
- **Expected behaviour:**  
  - The C file name is provided in the environment variable `$CFILE`.  
  - The script runs the preprocessor on `$CFILE`.  
  - The preprocessed output is saved in a file named `c`.  
- **Constraints:**  
  - Use the preprocessor stage only (no compilation / linking).  
  - No hard-coded filename; rely on `$CFILE`.

---

### 1. Compiler

- **File:** `1-compiler`  
- **Directory:** `hello_world`  
- **Type:** Shell script  
- **Objective:**  
  Compile a C file but do not link.  
- **Expected behaviour:**  
  - The C file name is provided in the variable `$CFILE`.  
  - The output file is named the same as the C file, but with the `.o` extension.  
    - Example: `main.c` → `main.o`.  
- **Constraints:**  
  - Compilation only (no linking).
  - No hard-coded filename; rely on `$CFILE`.

---

### 2. Assembler

- **File:** `2-assembler`  
- **Directory:** `hello_world`  
- **Type:** Shell script  
- **Objective:**  
  Generate the assembly code of a C file and save it in an output file.  
- **Expected behaviour:**  
  - The C file name is provided in the variable `$CFILE`.  
  - The output assembly file is named the same as the C file, but with the `.s` extension.  
    - Example: `main.c` → `main.s`.  
- **Constraints:**  
  - Use `gcc` to generate assembly (AT&T syntax by default).
  - No hard-coded filename.

---

### 3. Name

- **File:** `3-name`  
- **Directory:** `hello_world`  
- **Type:** Shell script  
- **Objective:**  
  Compile a C file and create an executable named `cisfun`.  
- **Expected behaviour:**  
  - The C file name is provided in the variable `$CFILE`.  
  - The script compiles the file and produces an executable `cisfun`.  
- **Constraints:**  
  - Use `gcc` for compilation and linking.
  - No hard-coded C file name; rely on `$CFILE`.

---

### 4. Hello, puts

- **File:** `4-puts.c`  
- **Directory:** `hello_world`  
- **Objective:**  
  Write a C program that prints exactly:  
  `"Programming is like building a multilingual puzzle`  
  followed by a new line.  
- **Expected behaviour:**  
  - Output:  
    `"Programming is like building a multilingual puzzle`  
    followed by `\n`.  
  - The program exits with return value `0`.  
- **Constraints:**  
  - Use the function `puts`.  
  - Do **not** use `printf`.  
  - Compile cleanly with:  
    `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c`.

---

### 5. Hello, printf

- **File:** `5-printf.c`  
- **Directory:** `hello_world`  
- **Objective:**  
  Write a C program that prints exactly:  
  `with proper grammar, but the outcome is a piece of art,`  
  followed by a new line.  
- **Expected behaviour:**  
  - Output:  
    `with proper grammar, but the outcome is a piece of art,`  
    followed by `\n`.  
  - The program returns `0`.  
- **Constraints:**  
  - Use the function `printf`.  
  - Do **not** use `puts`.  
  - Program must compile without warnings using:  
    `gcc -Wall`.

---

### 6. Size is not grandeur, and territory does not make a nation

- **File:** `6-size.c`  
- **Directory:** `hello_world`  
- **Objective:**  
  Write a C program that prints the size of various types on the computer it is compiled and run on.  
- **Expected behaviour:**  
  - Print lines in the exact format:  
    - `Size of a char: X byte(s)`  
    - `Size of an int: X byte(s)`  
    - `Size of a long int: X byte(s)`  
    - `Size of a long long int: X byte(s)`  
    - `Size of a float: X byte(s)`  
  - The program returns `0`.  
  - The expected sizes might differ between 32-bit (`-m32`) and 64-bit (`-m64`) compilation, but the format stays identical.  
- **Constraints:**  
  - Use `sizeof` to query sizes.  
  - Warnings are allowed, but behaviour must match the example.  

---

### 7. What happens when you type `gcc main.c`  *(advanced)*

- **Type:** Blog post (external content)  
- **Objective:**  
  Write a blog post that explains all the steps of compilation using `gcc`.  
- **Expected behaviour:**  
  - The blog post:
    - Uses `gcc` as the compiler in all examples.
    - Explains the stages: preprocessing, compilation, assembly, linking.
    - Includes command line examples (`gcc -E`, `gcc -c`, `gcc -S`, etc.).
    - Has at least one picture at the top of the post.
  - The blog is written in English.  
  - The post is published on Medium or LinkedIn and shared on LinkedIn.  
- **Links:**  
  - Blog URL:  
    `https://medium.com/@gpichot_63497/from-a-to-z-understanding-c-compilation-with-gcc-bf27f35c9c7e`  

---

### 8. Intel  *(advanced)*

- **File:** `100-intel`  
- **Directory:** `hello_world`  
- **Type:** Shell script  
- **Objective:**  
  Generate the assembly code (Intel syntax) of a C file and save it in an output file.  
- **Expected behaviour:**  
  - The C file name is provided in the variable `$CFILE`.  
  - The script generates an assembly file with Intel syntax, named like the C file but with `.s` extension.  
    - Example: `main.c` → `main.s`.  
- **Constraints:**  
  - Use `gcc` options to switch to Intel syntax (e.g. `-S -masm=intel`).
  - No hard-coded filename.

---

### 9. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity  *(advanced)*

- **File:** `101-quote.c`  
- **Directory:** `hello_world`  
- **Objective:**  
  Write a C program that prints exactly:  
  `and that piece of art is useful" - Dora Korpar, 2015-10-19`  
  followed by a new line, to the **standard error**.  
- **Expected behaviour:**  
  - Text is printed to `stderr` (file descriptor `2`).  
  - Program returns `1`.  
  - Output matches the required string exactly (quotes, commas, date, spaces, newline).  
- **Constraints:**  
  - Do **not** use any function listed in the `NAME` section of `man 3 printf` or `man 3 puts`.  
  - The program must compile without warnings using:  
    `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`.  

---

## Conclusion

This `hello_world` project established my foundation in C: I learned how the compilation pipeline works, how to control `gcc` to stop at each stage (preprocessor, object, assembly, executable), and how to use the basic C output functions correctly. I also practiced respecting strict compilation flags and coding style rules, and I documented my understanding through a public blog post. These skills are now the baseline for all future C projects in my low-level programming journey.
