# recursion

> Why use a loop when you can call yourself? Recursion: because sometimes the best way forward is to look back.

---

## 📝 Description

This project is part of my low-level programming curriculum at Holberton School. It focuses entirely on recursion — the art of writing functions that call themselves until they reach a base case and unwind gracefully. Through a series of exercises of increasing complexity, I implement classical algorithms (factorial, power, square root, prime check) and string operations (reverse, palindrome, wildcard matching) using only recursive calls. No loops. No static variables. Just the call stack and a little faith.

---

## 🎯 Learning Objectives

At the end of this project, I am able to explain what recursion is and how to implement it in C. I understand what a base case is and why it is essential to avoid infinite recursion. I know in which situations recursion is the right tool — such as problems that naturally decompose into smaller subproblems of the same kind — and in which situations it should be avoided, such as when iterative solutions are more efficient or when the recursion depth risks causing a stack overflow.

---

## 🛠️ Technologies Used

All programs in this project are written in **C** and compiled on **Ubuntu 20.04 LTS** using `gcc` with the flags `-Wall -Werror -Wextra -pedantic -std=gnu89`. Code style is enforced by the **Betty linter**. The only output function available is `_putchar` — the standard library is entirely forbidden. Loops and static variables are also off-limits, making recursion the only permitted control structure.

---

## ⚙️ Requirements

- **OS:** Ubuntu 20.04 LTS
- **Compiler:** `gcc` with options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Allowed editors:** `vi`, `vim`, `emacs`
- All files must end with a **new line**
- No errors and no warnings during compilation
- Global variables are **not allowed**
- No more than **5 functions per file**
- Standard library functions (`printf`, `puts`, etc.) are **forbidden**
- `_putchar` is allowed; do not push `_putchar.c`
- Loops of any kind are **not allowed**
- `static` variables are **not allowed**
- All function prototypes and `_putchar` must be declared in `main.h`
- Do not push `main.c` test files
- Code must follow the **Betty style**

---

## 🚀 Installation

```bash
git clone https://github.com/GwenP88/holbertonschool-low_level_programming.git
cd holbertonschool-low_level_programming/recursion
```

---

## ▶️ Usage / Execution

Compile any `.c` file with its corresponding test main and run the output:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
./0-puts_recursion
```

Replace filenames as appropriate for each task.

---

## 📊 Project Progress

<p align="center">
<img src="assets/progress_barre_100.gif" alt="Mandatory tasks progress" width="80%">
</p>

<p align="center">
<sub>Mandatory tasks completion: 100% --- Advanced tasks completion: 0%</sub>
</p>

---

## ✨ Features

### Task 0 - She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget

- Mandatory
- Write a recursive function that prints a string followed by a new line
- Prototype: `void _puts_recursion(char *s);` — only `_putchar` allowed, no loops
- Outputs the full string character by character via recursion, then prints `\n`

**Files:** `0-puts_recursion.c`

---

### Task 1 - Why is it so important to dream? Because, in my dreams we are together

- Mandatory
- Write a recursive function that prints a string in reverse
- Prototype: `void _print_rev_recursion(char *s);` — only `_putchar` allowed, no loops
- Outputs the string's characters from last to first via recursion

**Files:** `1-print_rev_recursion.c`

---

### Task 2 - Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange

- Mandatory
- Write a recursive function that returns the length of a string
- Prototype: `int _strlen_recursion(char *s);` — no standard library, no loops
- Returns the number of characters before the null terminator, computed recursively

**Files:** `2-strlen_recursion.c`

---

### Task 3 - You mustn't be afraid to dream a little bigger, darling

- Mandatory
- Write a recursive function that returns the factorial of a given number; returns `-1` for negative input and `1` for `0`
- Prototype: `int factorial(int n);` — no standard library, no loops
- Returns the correct factorial for non-negative integers and `-1` for any negative input

**Files:** `3-factorial.c`

---

### Task 4 - Once an idea has taken hold of the brain it's almost impossible to eradicate

- Mandatory
- Write a recursive function that returns `x` raised to the power of `y`; returns `-1` if `y` is negative
- Prototype: `int _pow_recursion(int x, int y);` — no standard library, no loops
- Correctly computes integer exponentiation and returns `-1` for negative exponents

**Files:** `4-pow_recursion.c`

---

### Task 5 - Your subconscious is looking for the dreamer

- Mandatory
- Write a recursive function that returns the natural (integer) square root of a number; returns `-1` if the number has no natural square root
- Prototype: `int _sqrt_recursion(int n);` — no standard library, no loops
- Returns the exact integer square root if it exists, otherwise `-1`

**Files:** `5-sqrt_recursion.c`

---

### Task 6 - Inception. Is it possible?

- Mandatory
- Write a recursive function that returns `1` if the input integer is a prime number, otherwise `0`
- Prototype: `int is_prime_number(int n);` — no standard library, no loops
- Returns `1` for primes (e.g., 17, 113, 7919) and `0` for all others including negatives and `1`

**Files:** `6-is_prime_number.c`

---

### Task 7 - They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything

- Advanced
- Write a recursive function that returns `1` if a string is a palindrome, `0` otherwise; an empty string is a palindrome
- Prototype: `int is_palindrome(char *s);` — no standard library, no loops
- Returns `1` for strings like `"level"`, `"redder"`, `"step on no pets"` and `0` for non-palindromes

**Files:** `100-is_palindrome.c`

---

### Task 8 - Inception. Now, before you bother telling me it's impossible...

- Advanced - **Not completed yet, but definitely planned (and slightly haunting me).**
- Write a recursive function that compares two strings and returns `1` if they can be considered identical, where `s2` may contain `*` as a wildcard matching any sequence of characters (including empty)
- Prototype: `int wildcmp(char *s1, char *s2);` — no standard library, no loops
- Handles patterns like `"*.c"`, `"m*c"`, `"***"` and correctly resolves all wildcard combinations

**Files:** `101-wildcmp.c`

---

## 🔮 What’s Next

I plan to continue working on this project by completing the advanced tasks that are not done yet. This will allow me to deepen my understanding, improve my skills, and push a bit further beyond the basics (because stopping halfway is not really my style).

---

## 🤝 Contributions & Acknowledgements

Thanks to Holberton School for a project that teaches you to think differently — literally. Once you stop reaching for loops and start trusting the call stack, something clicks. Special mention to the base case, the unsung hero that prevents every recursive function from becoming an infinite loop of regret.

---

## 👤 Author

**Gwenaelle PICHOT**
- Student at Holberton School
- Track: `holbertonschool-low_level_programming`
- Project: `recursion`
