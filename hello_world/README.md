# hello_world

> My very first steps in C — where every semicolon is sacred and every warning is a lesson in humility.

---

## 📝 Description

This project marks the beginning of my journey into low-level programming with C at Holberton School. I get acquainted with the `gcc` compiler, learn how a C program goes from source code to executable, and write my first programs using the standard output functions `printf`, `puts`, and `putchar`. I also explore the different stages of compilation — preprocessing, compiling, assembling, and linking — using shell scripts to automate each step. It's the "Hello, World" of a much longer adventure.

---

## 🎯 Learning Objectives

At the end of this project, I am able to explain why C programming is awesome and who invented it — Dennis Ritchie — as well as the contributions of Brian Kernighan and Linus Torvalds to the programming world. I understand what happens step by step when I type `gcc main.c`, what an entry point is, and what the `main` function does in a C program. I know how to print text using `printf`, `puts`, and `putchar`, and how to get the size of a specific type using the `sizeof` unary operator. I can compile C files using `gcc`, I know what the default program name is when no output name is specified, and I understand the official C coding style enforced by `betty-style`. I also know how to find the correct header to include when using a standard library function, and I understand how the return value of `main` influences the program's exit status.

---

## 🛠️ Technologies Used

This project is written in **C** (compiled with `gcc` on **Ubuntu 20.04 LTS**), with compilation flags `-Wall -Werror -Wextra -pedantic -std=gnu89`. Shell scripts (Bash) are also used to automate compilation steps. Code style is enforced by the **Betty linter** (`betty-style.pl` and `betty-doc.pl`). No external libraries beyond the C standard library are used.

---

## ⚙️ Requirements

**C files:**
- **OS:** Ubuntu 20.04 LTS
- **Compiler:** `gcc` with options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Allowed editors:** `vi`, `vim`, `emacs`
- All files must end with a **new line**
- No errors and no warnings during compilation
- Use of `system` is **not allowed**
- Code must follow the **Betty style** (checked with `betty-style.pl` and `betty-doc.pl`)

**Shell scripts:**
- All scripts must be exactly **two lines long** (`wc -l file` must print `2`)
- The first line of every script must be exactly `#!/bin/bash`
- All files must be **executable**

---

## 🚀 Installation

```bash
git clone https://github.com/GwenP88/holbertonschool-low_level_programming.git
cd holbertonschool-low_level_programming/hello_world
```

To install the Betty linter:

```bash
git clone https://github.com/holbertonschool/Betty.git
cd Betty
sudo ./install.sh
```

---

## ▶️ Usage / Execution

**For shell scripts**, make the file executable and run it:

```bash
chmod +x ./0-preprocessor
export CFILE=main.c
./0-preprocessor
```

**For C programs**, compile and run:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c -o puts_demo
./puts_demo
```

**To check style with Betty:**

```bash
betty filename.c
```

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

### Task 0 - Preprocessor

- Mandatory
- Write a script that runs a C file (stored in `$CFILE`) through the preprocessor and saves the result into a file named `c`
- Must use `gcc -E`
- Produces the preprocessed output file `c` from the source stored in `$CFILE`

**Files:** `0-preprocessor`

---

### Task 1 - Compiler

- Mandatory
- Write a script that compiles a C file without linking; output file named after the source with `.o` extension
- Must use `gcc -c`; the C file name is stored in `$CFILE`
- Produces a `.o` object file with the same base name as the source file

**Files:** `1-compiler`

---

### Task 2 - Assembler

- Mandatory
- Write a script that generates the assembly code of a C file; output file named after the source with `.s` extension
- Must use `gcc -S`; the C file name is stored in `$CFILE`
- Produces a `.s` assembly file with the same base name as the source file

**Files:** `2-assembler`

---

### Task 3 - Name

- Mandatory
- Write a script that compiles a C file and creates an executable named `cisfun`
- Must use `gcc -o cisfun`; the C file name is stored in `$CFILE`
- Produces an executable named `cisfun`

**Files:** `3-name`

---

### Task 4 - Hello, puts

- Mandatory
- Write a C program that prints `"Programming is like building a multilingual puzzle` followed by a new line
- Must use `puts`; `printf` is not allowed; program must return `0`
- Outputs the exact string to stdout and exits with status `0`

**Files:** `4-puts.c`

---

### Task 5 - Hello, printf

- Mandatory
- Write a C program that prints `with proper grammar, but the outcome is a piece of art,` followed by a new line
- Must use `printf`; `puts` is not allowed; must compile without warnings with `-Wall`
- Outputs the exact string to stdout and returns `0`

**Files:** `5-printf.c`

---

### Task 6 - Size is not grandeur, and territory does not make a nation

- Mandatory
- Write a C program that prints the size (in bytes) of `char`, `int`, `long int`, `long long int`, and `float`
- Must use `sizeof`; warnings are allowed; program must return `0`
- Outputs the size of each type, with results that differ between 32-bit and 64-bit compilation

**Files:** `6-size.c`

---

### Task 7 - What happens when you type gcc main.c

- Advanced
- Write a blog post explaining all the steps of compilation using `gcc`, with command-line examples
- Must include at least one image; published on Medium or LinkedIn; shared on LinkedIn; written in English
- A detailed, beginner-friendly article covering preprocessing, compiling, assembling, and linking

**Files:** *(blog post URL)*

---

### Task 8 - Intel

- Advanced
- Write a script that generates the assembly code in Intel syntax from a C file; output file has `.s` extension
- Must use `gcc -S -masm=intel`; the C file name is stored in `$CFILE`
- Produces a `.s` file using Intel assembly syntax

**Files:** `100-intel`

---

### Task 9 - UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity

- Advanced
- Write a C program that prints `and that piece of art is useful" - Dora Korpar, 2015-10-19` followed by a new line, to **standard error**
- `printf` and `puts` (and any function from their man pages) are not allowed; must return `1`; must compile without warnings with `-Wall`
- Outputs the exact string to stderr and exits with status `1`

**Files:** `101-quote.c`

---

## 🤝 Contributions & Acknowledgements

A warm thank you to Holberton School for easing me into C with gentle tasks like "figure out what a compiler actually does." Jokes aside, the structured progression from preprocessor to linker is genuinely enlightening. Thanks also to Dennis Ritchie — without him, none of this would compile.

---

## 👤 Author

**Gwenaelle PICHOT**
- Student at Holberton School
- Track: `holbertonschool-low_level_programming`
- Project: `hello_world`
