![Shell Basics Banner](/assets/holberton.png)

## Introduction  
This project deepens understanding of how C handles functions at a low level through the use of function pointers.  
With this projetc, you will learn how to store the address of a function, pass functions as arguments, select behaviors dynamically at runtime, and build modular logic that relies on callbacks and operator–function mapping.  
The project progresses from simple function calls to a full operator dispatcher and a program capable of printing its own opcodes.

---

## What I Learned  
- How to declare, assign, and call function pointers  
- How a function pointer stores the memory address of executable code  
- How virtual memory stores functions in the text segment  
- How to pass functions as parameters to other functions (callbacks)  
- How to build flexible logic by selecting functions dynamically  
- How to map operators to functions using structures and arrays  
- How to retrieve and print raw opcodes of a function  

---

# Tasks Breakdown

---

## 0. What's my name  
**Objective:**  
Use a function pointer to decide how a name will be printed.

**Expected:**  
- Call the function provided via the pointer  
- Pass the `name` argument correctly  
- Handle `NULL` pointers safely  

**Constraints:**  
- Prototype: `void print_name(char *name, void (*f)(char *));`  
- No assumptions about how `f` prints the name  

---

## 1. If you spend too much time thinking about a thing, you'll never get it done  
**Objective:**  
Iterate over an integer array and apply a callback function to each element.

**Expected:**  
- Loop through all elements  
- Call the function pointer `action` on each value  
- Do nothing if `array` or `action` is `NULL`  

**Constraints:**  
- Prototype: `void array_iterator(int *array, size_t size, void (*action)(int));`  
- Must apply the callback exactly once per element  

---

## 2. To hell with circumstances; I create opportunities  
**Objective:**  
Search an array for the first element that satisfies a condition defined by a callback.

**Expected:**  
- Call `cmp` on each element  
- Return the index of the first element where `cmp` does not return 0  
- Return `-1` if no match or if `size <= 0`  

**Constraints:**  
- Prototype: `int int_index(int *array, int size, int (*cmp)(int));`  
- Must handle invalid pointers  
- Must stop at the first match  

---

## 3. A goal is not always meant to be reached, it often serves simply as something to aim at  
**Objective:**  
Build a simple calculator using operator–function mapping.

**Expected:**  
- Parse arguments and convert numbers with `atoi`  
- Select the correct operation using a function pointer  
- Print the result followed by a newline  
- Handle all error conditions with specific exit codes  

**Constraints:**  
- Four required files:  
  - `3-main.c`  
  - `3-op_functions.c`  
  - `3-get_op_func.c`  
  - `3-calc.h`  
- No loops in `main`  
- Only one `if` in `get_op_func`  
- No `switch`, no `goto`, no `else`  
- Exit codes:  
  - `98`: wrong number of arguments  
  - `99`: invalid operator  
  - `100`: division/modulo by zero  

---

## 4. Most hackers are young because young people tend to be adaptable  
**Objective:**  
Print the opcodes (machine code) of the `main` function.

**Expected:**  
- Print each opcode in lowercase hexadecimal  
- Two characters per opcode  
- End with a newline  
- Validate argument count and byte count  

**Constraints:**  
- Use `atoi` for conversion  
- Exit codes:  
  - `1`: wrong argument count  
  - `2`: negative byte count  
- No special compilation flags required  

---

## Conclusion  
This project strengthens low-level understanding of how C manages code execution through function pointers.  
Working through callbacks, dynamic function selection, operator mapping, and opcode inspection develops a deeper grasp of how functions are stored, addressed, and invoked in memory.  
By completing these tasks, you will lay the necessary foundations for writing more flexible, modular, and extensible C programs—essential skills for systems programming, advanced C projects, and troubleshooting at a lower level of abstraction.
