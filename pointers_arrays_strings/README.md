![Shell Basics Banner](/assets/holberton.png)

# Pointers, Arrays and Strings — Full Module (3 Projects)

## Introduction

This module groups three Holberton C projects around one core idea: learning how data is stored and manipulated in memory using pointers, arrays and strings.  

Across these three projects, I progressively moved from simple pointer manipulation to string utilities, encoding functions, manual integer parsing, custom big-integer addition, and multidimensional arrays. This README summarizes the learning objectives and documents all exercises from:

- Part 1 — `pointers_arrays_strings`
- Part 2 — `more_pointers_arrays_strings`
- Part 3 — `even_more_pointers_arrays_strings`

---

## Learning Objectives (Global)

By the end of the full module, I should be able to explain, without using Google:

- What pointers are, how to declare them, dereference them, and pass them to functions.
- What arrays are, how they are stored in memory, and how they differ from pointers.
- How to work with strings in C (null-terminated character arrays) and manipulate them safely.
- How to use pointers to pointers and how multidimensional arrays are laid out in memory.
- How to implement common string and memory functions (e.g. `strlen`, `strcpy`, `strcat`, `memset`, `memcpy`, `strchr`, `strstr`, etc.).
- How to reason about variable scope and lifetime.
- How to represent numbers as strings and convert between text and integer formats.
- How to design and test small utility functions under strict compilation rules:
  - `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`.

---

## What I Learned With This Module

- How to **update values via pointers**, swap variables, and operate directly on memory.
- How to **iterate over arrays and strings** using pointer arithmetic as well as indices.
- How to **reimplement standard library functions** (string and memory functions) to deeply understand their behavior.
- How to **print and transform strings**: reversing them, taking substrings (half, every other char), changing case, and encoding (leet, ROT13).
- How to **convert between text and numbers**:
  - Parsing an integer from a string (`_atoi`),
  - Printing integers character by character (`print_number`),
  - Performing addition on numbers stored as strings (`infinite_add`).
- How to **inspect raw memory**:
  - Dump buffers in hex with printable characters,
  - Fill and copy memory regions (`_memset`, `_memcpy`),
  - Use multidimensional arrays (chessboard, matrices) and understand how they are flattened in memory.
- How to **use addresses creatively**:
  - Pointer-to-pointer usage (`set_string`),
  - Avoiding direct variable references (`102-magic.c`),
  - Generating valid passwords for given binaries (`101-keygen.c`, crackme tasks).

---

## Part 1 — Pointers, Arrays and Strings (`pointers_arrays_strings`)

### 1.1 98 Battery st.

- **File:** `0-reset_to_98.c`  
- **Prototype:** `void reset_to_98(int *n);`  
- **Objective:**  
  Take a pointer to an `int` and update the value it points to to `98`.  
- **Key idea:**  
  Understand dereferencing and in-place modification of variables via pointers.

---

### 1.2 Don’t swap horses in crossing a stream

- **File:** `1-swap.c`  
- **Prototype:** `void swap_int(int *a, int *b);`  
- **Objective:**  
  Swap the values of two integers using their addresses.  
- **Key idea:**  
  Use a temporary variable and pointer dereferencing to exchange values.

---

### 1.3 This report, by its very length, defends itself against the risk of being read

- **File:** `2-strlen.c`  
- **Prototype:** `int _strlen(char *s);`  
- **Objective:**  
  Return the length of a string (number of characters before the null terminator).  
- **Key idea:**  
  Iterate through a `char *` until `'\0'`, counting characters.

---

### 1.4 I do not fear computers. I fear the lack of them

- **File:** `3-puts.c`  
- **Prototype:** `void _puts(char *str);`  
- **Objective:**  
  Print a string followed by a new line to `stdout`.  
- **Key idea:**  
  Print each character until `'\0'`, using `_putchar` or equivalent, mirroring `puts`.

---

### 1.5 I can only go one way. I’ve not got a reverse gear

- **File:** `4-print_rev.c`  
- **Prototype:** `void print_rev(char *s);`  
- **Objective:**  
  Print a string in reverse, followed by a new line.  
- **Key idea:**  
  First determine the string length, then iterate backwards.

---

### 1.6 A good engineer thinks in reverse…

- **File:** `5-rev_string.c`  
- **Prototype:** `void rev_string(char *s);`  
- **Objective:**  
  Reverse a string in place.  
- **Key idea:**  
  Use two indices (start/end) and swap characters until the middle of the string.

---

### 1.7 Half the lies they tell about me aren’t true

- **File:** `6-puts2.c`  
- **Prototype:** `void puts2(char *str);`  
- **Objective:**  
  Print every other character of a string, starting with the first, followed by a new line.  
- **Key idea:**  
  Iterate with a step of 2 (`i += 2`) or equivalent logic.

---

### 1.8 Winning is only half of it. Having fun is the other half

- **File:** `7-puts_half.c`  
- **Prototype:** `void puts_half(char *str);`  
- **Objective:**  
  Print the second half of a string followed by a new line.  
- **Key idea:**  
  - Compute length `len`.
  - If `len` is even, start at `len / 2`.
  - If `len` is odd, start at `(len + 1) / 2`.

---

### 1.9 Arrays are not pointers

- **File:** `8-print_array.c`  
- **Prototype:** `void print_array(int *a, int n);`  
- **Objective:**  
  Print `n` elements of an array of integers, separated by `", "`, followed by a new line.  
- **Key idea:**  
  Use a loop over the array, careful with formatting (no trailing comma).

---

### 1.10 `strcpy`

- **File:** `9-strcpy.c`  
- **Prototype:** `char *_strcpy(char *dest, char *src);`  
- **Objective:**  
  Copy the string pointed to by `src` (including the null byte) into `dest`, and return `dest`.  
- **Key idea:**  
  Replicate `strcpy` behavior with a simple copy loop until `'\0'`.

---

### 1.11 Great leaders… `_atoi`

- **File:** `100-atoi.c`  
- **Prototype:** `int _atoi(char *s);`  
- **Objective:**  
  Convert a string to an integer, handling:
  - Any number of leading characters,
  - Multiple `+` and `-` signs,
  - No numbers (return `0`).  
- **Constraints:**
  - No `long`.
  - No new array-type variables.
  - No hard-coded special values.
  - Must handle integer overflow behavior (compiled with `-fsanitize=signed-integer-overflow`).  
- **Key idea:**  
  Scan through the string, track sign, then accumulate digits into an `int`.

---

### 1.12 Don’t hate the hacker, hate the code  *(advanced)*

- **File:** `101-keygen.c`  
- **Objective:**  
  Generate random valid passwords for the `101-crackme` program.  
- **Key idea:**  
  Use `rand`, `srand`, and `time` (plus reverse-engineering with tools like `gdb`, `objdump`, etc.) to satisfy the binary’s expected password conditions.

---

## Part 2 — More Pointers, Arrays and Strings (`more_pointers_arrays_strings`)

### 2.1 `strcat`

- **File:** `0-strcat.c`  
- **Prototype:** `char *_strcat(char *dest, char *src);`  
- **Objective:**  
  Append `src` to `dest`, overwriting the terminating null byte of `dest`, and add a new `'\0'`. Return `dest`.  
- **Key idea:**  
  Move to end of `dest`, then copy `src` including the null terminator.

---

### 2.2 `strncat`

- **File:** `1-strncat.c`  
- **Prototype:** `char *_strncat(char *dest, char *src, int n);`  
- **Objective:**  
  Concatenate at most `n` bytes from `src` to `dest`, then add a terminating null byte. Return `dest`.  
- **Key idea:**  
  Stop when `n` bytes have been copied or `src` ends.

---

### 2.3 `strncpy`

- **File:** `2-strncpy.c`  
- **Prototype:** `char *_strncpy(char *dest, char *src, int n);`  
- **Objective:**  
  Copy at most `n` bytes of `src` into `dest`, padding with `'\0'` if `src` is shorter, like `strncpy`.  
- **Key idea:**  
  Handle both cases: `src` shorter than `n` and `src` longer/equal to `n`.

---

### 2.4 `strcmp`

- **File:** `3-strcmp.c`  
- **Prototype:** `int _strcmp(char *s1, char *s2);`  
- **Objective:**  
  Compare two strings lexicographically and return an integer less than, equal to, or greater than zero, like `strcmp`.  
- **Key idea:**  
  Compare characters until a difference or `'\0'`.

---

### 2.5 I am a kind of paranoid in reverse

- **File:** `4-rev_array.c`  
- **Prototype:** `void reverse_array(int *a, int n);`  
- **Objective:**  
  Reverse the content of an integer array of length `n`.  
- **Key idea:**  
  Use two indices (start/end) and swap elements in place.

---

### 2.6 Always look up

- **File:** `5-string_toupper.c`  
- **Prototype:** `char *string_toupper(char *);`  
- **Objective:**  
  Change all lowercase letters in a string to uppercase.  
- **Key idea:**  
  Detect lowercase characters and convert them using ASCII offsets, in-place.

---

### 2.7 Expect the best. Prepare for the worst. Capitalize on what comes

- **File:** `6-cap_string.c`  
- **Prototype:** `char *cap_string(char *);`  
- **Objective:**  
  Capitalize all words of a string. Word separators include:  
  space, tab, newline, `,`, `;`, `.`, `!`, `?`, `"`, `(`, `)`, `{`, `}`.  
- **Key idea:**  
  Identify word boundaries and uppercase the first letter of each word.

---

### 2.8 Mozart composed his music not for the elite, but for everybody

- **File:** `7-leet.c`  
- **Prototype:** `char *leet(char *);`  
- **Objective:**  
  Encode a string into “1337”:
  - `a/A → 4`
  - `e/E → 3`
  - `o/O → 0`
  - `t/T → 7`
  - `l/L → 1`  
- **Constraints:**  
  - Only one `if` statement.
  - Only two loops.
  - No `switch`.
  - No ternary operator.  
- **Key idea:**  
  Map characters via parallel arrays or equivalent simple lookup.

---

### 2.9 `rot13` *(advanced)*

- **File:** `100-rot13.c`  
- **Prototype:** `char *rot13(char *);`  
- **Objective:**  
  Encode a string using ROT13.  
- **Constraints:**  
  - Only one `if` statement.
  - Only two loops.
  - No `switch`.
  - No ternary operator.  
- **Key idea:**  
  Map each letter to the letter 13 positions away, handling uppercase and lowercase.

---

### 2.10 Numbers have life; they’re not just symbols on paper *(advanced)*

- **File:** `101-print_number.c`  
- **Prototype:** `void print_number(int n);`  
- **Objective:**  
  Print an integer using only `_putchar`.  
- **Constraints:**  
  - No `long`.
  - No arrays or pointers.
  - No hard-coded special values.  
- **Key idea:**  
  Decompose `n` into digits (via recursion or iterative division) and print each digit as a character.

---

### 2.11 A dream doesn’t become reality through magic… *(advanced)*

- **File:** `102-magic.c`  
- **Objective:**  
  Add a single line of code so that the program prints `a[2] = 98`:
  - Without using the variable `a` directly,
  - Without modifying `p`,
  - Only one statement at the exact required line,
  - No commas, no other changes.  
- **Key idea:**  
  Use pointer arithmetic and the existing pointer `p` to access `a[2]`.

---

### 2.12 It is the addition of strangeness to beauty… *(advanced)*

- **File:** `103-infinite_add.c`  
- **Prototype:** `char *infinite_add(char *n1, char *n2, char *r, int size_r);`  
- **Objective:**  
  Add two non-negative numbers represented as strings (`n1`, `n2`) and store the result in buffer `r`.  
- **Constraints:**  
  - `r` is the result buffer.
  - `size_r` is its size.
  - Return pointer to result or `0` if the result cannot fit.  
- **Key idea:**  
  Implement manual addition from the end of both strings, managing carries and buffer limits.

---

### 2.13 Noise is a buffer, more effective than cubicles… *(advanced)*

- **File:** `104-print_buffer.c`  
- **Prototype:** `void print_buffer(char *b, int size);`  
- **Objective:**  
  Print a hex dump of `size` bytes of buffer `b`:
  - 10 bytes per line.
  - Each line starts with the byte offset in hex (8 chars).
  - Then hex values (2 chars) grouped 2-bytes with spaces.
  - Then printable characters or `.` for non-printables.
  - If `size <= 0`, just print a new line.  
- **Key idea:**  
  Combine pointer arithmetic, formatted hex printing, and ASCII checks to mimic a hexdump.

---

## Part 3 — Even More Pointers, Arrays and Strings (`even_more_pointers_arrays_strings`)

### 3.1 `memset`

- **File:** `0-memset.c`  
- **Prototype:** `char *_memset(char *s, char b, unsigned int n);`  
- **Objective:**  
  Fill the first `n` bytes of memory area `s` with byte `b`. Return `s`.  
- **Key idea:**  
  Implement the behavior of `memset` with a simple loop.

---

### 3.2 `memcpy`

- **File:** `1-memcpy.c`  
- **Prototype:** `char *_memcpy(char *dest, char *src, unsigned int n);`  
- **Objective:**  
  Copy `n` bytes from `src` to `dest` and return `dest`.  
- **Key idea:**  
  Implement the behavior of `memcpy`, copying byte by byte.

---

### 3.3 `strchr`

- **File:** `2-strchr.c`  
- **Prototype:** `char *_strchr(char *s, char c);`  
- **Objective:**  
  Locate the first occurrence of character `c` in string `s`.  
- **Expected behavior:**  
  - Return a pointer to the first occurrence of `c` in `s`, or `NULL` if not found.  
- **Key idea:**  
  Traverse the string until `c` or `'\0'`.

---

### 3.4 `strspn`

- **File:** `3-strspn.c`  
- **Prototype:** `unsigned int _strspn(char *s, char *accept);`  
- **Objective:**  
  Get the length of the initial segment of `s` consisting only of bytes from `accept`.  
- **Key idea:**  
  For each character in `s`, check if it is in `accept`; stop at the first non-matching byte.

---

### 3.5 `strpbrk`

- **File:** `4-strpbrk.c`  
- **Prototype:** `char *_strpbrk(char *s, char *accept);`  
- **Objective:**  
  Search a string for any of a set of bytes.  
- **Expected behavior:**  
  - Return a pointer to the first byte in `s` that matches any byte in `accept`, or `NULL` if none.  
- **Key idea:**  
  Nested search: for each character in `s`, scan `accept`.

---

### 3.6 `strstr`

- **File:** `5-strstr.c`  
- **Prototype:** `char *_strstr(char *haystack, char *needle);`  
- **Objective:**  
  Locate the first occurrence of substring `needle` in `haystack`.  
- **Expected behavior:**  
  - Return pointer to the start of the substring, or `NULL` if not found.  
- **Key idea:**  
  For each position in `haystack`, try to match the full `needle`.

---

### 3.7 Chess is mental torture

- **File:** `7-print_chessboard.c`  
- **Prototype:** `void print_chessboard(char (*a)[8]);`  
- **Objective:**  
  Print an 8×8 chessboard stored as a 2D array of chars.  
- **Key idea:**  
  Use nested loops over rows and columns; understand pointer-to-array parameter `char (*a)[8]`.

---

### 3.8 The line of life is a ragged diagonal between duty and desire

- **File:** `8-print_diagsums.c`  
- **Prototype:** `void print_diagsums(int *a, int size);`  
- **Objective:**  
  Print the sum of the two diagonals of a square matrix of integers.  
- **Key idea:**  
  Treat `a` as a flat buffer representing a `size × size` matrix and compute:
  - Primary diagonal: indices `(i * size + i)`
  - Secondary diagonal: indices `(i * size + (size - 1 - i))`.

---

### 3.9 Double pointer, double fun *(advanced)*

- **File:** `100-set_string.c`  
- **Prototype:** `void set_string(char **s, char *to);`  
- **Objective:**  
  Set the value of a pointer to a `char`.  
- **Key idea:**  
  Use a pointer to a pointer to redirect where a `char *` points.

---

### 3.10 My primary goal of hacking… *(advanced)*

- **File:** `101-crackme_password`  
- **Objective:**  
  Create a file containing the exact password (no newline, no extra space) for the `crackme2` executable.  
- **Key idea:**  
  Use binary analysis tools (`ltrace`, `gdb`, `objdump`, etc.) and possibly crypto libraries to reverse-engineer and extract the correct password.

---

## Conclusion

This three-part module on pointers, arrays and strings forced me to really understand how C manipulates memory and text:

- Starting from basic pointer updates and string length,
- Moving through string concatenation, comparison, encoding, and custom numeric functions,
- Ending with memory-level operations, multidimensional arrays, and pointer-to-pointer usage.

These projects are now a solid reference for low-level operations in C, and they form a strong foundation for more advanced topics like dynamic memory allocation, data structures, and systems programming.
