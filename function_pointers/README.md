<p align="center">
  <img src="./assets/banner.jpg" alt="holbertonschool-low-level-programming Banner" width="500">
</p>

# function_pointers

> Functions that point to other functions — because in C, even behavior can be passed around like data. 🎯

---

## 📝 Description

This project is part of my low-level programming curriculum at Holberton School. It focuses on one of C's most powerful and flexible features: function pointers. Instead of calling functions directly, I learn to store references to them, pass them as arguments, and invoke them dynamically at runtime. Through a series of progressively challenging programs, I implement a generic array iterator, an index search function with a custom comparator, and a full calculator that dispatches operations through function pointers — all while respecting strict constraints on control flow and code structure. The advanced task goes even further, printing the raw opcodes of my own `main` function directly from memory.

---

## 🎯 Learning Objectives

At the end of this project, I am able to explain what function pointers are and how to use them in C. I understand exactly what a function pointer holds: the address of a function in the program's virtual memory, specifically in the text (code) segment where executable instructions are stored. I know how to declare, assign, pass, and call function pointers, and I can use them to build generic, reusable functions that apply any behavior to any data — just like callbacks in higher-level languages, but at the C level where nothing is hidden.

---

## 🛠️ Technologies Used

All programs in this project are written in **C** and compiled on **Ubuntu 20.04 LTS** using `gcc` with the flags `-Wall -Werror -Wextra -pedantic -std=gnu89`. Code style is enforced by the **Betty linter**. The only C standard library functions permitted are `malloc`, `free`, and `exit` — with the exception of Task 3 (calculator), where the standard library is fully allowed, and Task 4 (advanced opcodes), which also allows `printf` and `atoi`. All function prototypes are declared in the header file `function_pointers.h`, which uses include guards.

---

## ⚙️ Requirements

- **OS:** Ubuntu 20.04 LTS
- **Compiler:** `gcc` with options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Allowed editors:** `vi`, `vim`, `emacs`
- All files must end with a **new line**
- No errors and no warnings during compilation
- Global variables are **not allowed**
- No more than **5 functions per file**
- Only `malloc`, `free`, and `exit` are allowed from the standard library (unless stated otherwise per task)
- `_putchar` is allowed; do not push `_putchar.c`
- Do not push `main.c` test files
- All function prototypes must be declared in `function_pointers.h`
- All header files must be **include guarded**
- Code must follow the **Betty style**

---

## 🚀 Installation

```bash
git clone https://github.com/GwenP88/holbertonschool-low_level_programming.git
cd holbertonschool-low_level_programming/function_pointers
```

---

## ▶️ Usage / Execution

Compile the relevant source files and run the resulting executable:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o a
./a
```

For the calculator (Task 3):

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
./calc 1024 '*' 98
```

For the advanced opcodes task (no flags required):

```bash
gcc -std=gnu89 100-main_opcodes.c -o main
./main 21
```

Replace filenames and arguments as appropriate for each task.

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

### Task 0 - What's my name

- Mandatory
- Write a function that prints a name by calling a function passed as a parameter
- Prototype: `void print_name(char *name, void (*f)(char *));` — the function `f` is called with `name` as its argument
- Calling `print_name("Bob", print_name_as_is)` outputs `Hello, my name is Bob`; calling it with `print_name_uppercase` outputs the name in uppercase — same function, different behavior, zero `if` statements

**Files:** `0-print_name.c`

---

### Task 1 - If you spend too much time thinking about a thing, you'll never get it done

- Mandatory
- Write a function that executes a given function on each element of an integer array
- Prototype: `void array_iterator(int *array, size_t size, void (*action)(int));` — `action` is called once per element; if `array` is `NULL`, nothing happens
- Calling `array_iterator(array, 5, &print_elem)` prints each integer; calling it with `&print_elem_hex` prints each in hexadecimal — one iterator, infinite possibilities

**Files:** `1-array_iterator.c`

---

### Task 2 - To hell with circumstances; I create opportunities

- Mandatory
- Write a function that searches an integer array for the first element that satisfies a custom comparison function
- Prototype: `int int_index(int *array, int size, int (*cmp)(int));` — returns the index of the first element for which `cmp` returns non-zero; returns `-1` if no match or if `size <= 0`
- With `is_98` as comparator, returns the index of the first `98`; with `abs_is_98`, catches both `98` and `-98`; with `is_strictly_positive`, finds the first positive value

**Files:** `2-int_index.c`

---

### Task 3 - A goal is not always meant to be reached, it often serves simply as something to aim at

- Mandatory
- Write a calculator program that performs addition, subtraction, multiplication, division, and modulo using function pointers dispatched from an `op_t` struct array
- Usage: `./calc num1 operator num2`; exits with status `98` for wrong argument count, `99` for unknown operator, `100` for division by zero; no `switch`, no `for`/`do...while`, no `goto`, no `else`, at most one `if` and one `while` in `get_op_func`, at most three `if` in `main`; `op_add`, `op_sub`, `op_mul`, `op_div`, `op_mod` must never be called directly from `main`
- `./calc 1024 '*' 98` prints `100352`; `./calc 1024 '\*' 98` prints `Error` — the operator is looked up dynamically through `get_op_func`, which returns the matching function pointer from the `ops` array

**Files:** `3-main.c`, `3-op_functions.c`, `3-get_op_func.c`, `3-calc.h`

---

### Task 4 - Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker

- Advanced — **This task is still in progress — my future self is on it.**
- Write a program that prints the raw opcodes of its own `main` function in hexadecimal
- Usage: `./main number_of_bytes`; opcodes printed in lowercase hex, two characters each, space-separated, ending with a newline; exits with status `1` for wrong argument count, status `2` for a negative byte count; `printf` and `atoi` are allowed; compile without flags
- `./main 21` prints the first 21 bytes of `main`'s machine code, matching the output of `objdump -d` for the same function

**Files:** `100-main_opcodes.c`

---

## 🤝 Contributions & Acknowledgements

Thanks to Holberton School for a project that reframes how I think about functions — not as fixed calls, but as values that can be stored, passed, and invoked like any other data. The calculator task in particular is a small masterpiece of constraints: no loops in `main`, no direct calls to arithmetic functions, one `if` allowed. Writing clean code under pressure is its own kind of skill. Thanks also to `objdump`, the most honest program I have ever run on my own code.

---

## 👤 Author

**Gwenaelle PICHOT**
- Student at Holberton School
- Track: `holbertonschool-low_level_programming`
- Project: `function_pointers`
