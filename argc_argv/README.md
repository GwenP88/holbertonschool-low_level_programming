![Shell Basics Banner](/assets/holberton.png)

# argc & argv – Holberton School Project

## Introduction
This project introduced me to **command-line arguments** in C, and forced me to move beyond programs that only rely on internal variables. For the first time, my programs had to process data passed directly from the terminal, validate inputs, convert strings to numbers, and manage error cases gracefully.

I also learned the two valid prototypes of `main`, why both exist, and how to silence unused-parameter warnings using tools like `__attribute__((unused))` and `(void)parameter`.  
These concepts are essential for building real command-line utilities that behave correctly regardless of how they are invoked.

---

## Concepts Learned

- **How to use arguments passed to the program**  
  - Understanding the meaning of `argc` (argument count) and `argv` (argument vector).  
  - Accessing values from the command line and iterating over them.

- **Two valid prototypes of `main`**
  - `int main(void)` → used when no arguments are required.  
  - `int main(int argc, char *argv[])` → used when arguments need to be processed.

- **How to handle unused parameters**
  - Using `(void)argc;` or `(void)argv;` to silence warnings.  
  - Or using `__attribute__((unused))` for cleaner prototypes.

- **Practical argument parsing**
  - Detect missing arguments.  
  - Validate that arguments represent valid integers.  
  - Convert strings to numbers with `atoi`.

---

## Tasks

### `0-whatsmyname` – It ain't what they call you, it's what you answer to
**Instruction:** Write a program that prints its own name, followed by a newline.

**Constraints:**
- The program must print its name exactly as received in `argv[0]`.  
- If renamed, it prints the new name without recompilation.  
- You must not strip the path.

**What I learned:**  
How to use `argv[0]` to inspect the invoked program name and how command-line invocation directly impacts program behavior.

---

### `1-args` – Silence is argument carried out by other means
**Instruction:** Write a program that prints the number of arguments passed to it.

**Constraints:**
- Print a number followed by a newline.
- The program name is **not** counted.

**What I learned:**  
How `argc` works, and how to subtract one to get the actual number of user-provided arguments.

---

### `2-args` – The best argument against democracy is a five-minute conversation with the average voter
**Instruction:** Write a program that prints all arguments it receives.

**Constraints:**
- Print each argument on its own line.
- Include the first argument (`argv[0]`).

**What I learned:**  
How to loop through all values in `argv` and handle arbitrary numbers of inputs.

---

### `3-mul` – Neither irony nor sarcasm is argument
**Instruction:** Write a program that multiplies two numbers.

**Constraints:**
- Program receives exactly **two** arguments.
- Print the result of their multiplication.
- If arguments are missing, print `Error` and return `1`.
- All values must fit in an `int`.

**What I learned:**  
How to validate argument counts and convert string arguments to integers using `atoi`.

---

### `4-add` – To infinity and beyond
**Instruction:** Add all positive numbers passed as arguments.

**Constraints:**
- Print the result followed by a newline.
- If no arguments are given, print `0`.
- If any argument is not entirely numeric, print `Error` and return `1`.
- All values fit in an `int`.

**What I learned:**  
How to validate that a string contains only digits before using it, and how to accumulate values from multiple arguments.

---

### `100-change` – Minimal Number of Coins for Change *(advanced)*
**Instruction:** Print the minimum number of coins needed to make change.

**Constraints:**
- Usage: `./change cents`
- If incorrect number of arguments → print `Error` and return `1`.
- Use `atoi` to parse the argument.
- If the value is negative → print `0`.
- Allowed coin values: **25, 10, 5, 2, 1**.
- You may use unlimited coins.

**What I learned:**  
How to implement a greedy algorithm with input validation and produce a result based on real-world constraints like coin denominations.

---

## Conclusion
This project strengthened my understanding of how programs interact with the command line. I learned to:

- Read and va

