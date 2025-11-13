![Shell Basics Banner](/assets/holberton.png)

# More malloc, free – Holberton School Project

## Introduction
This project goes deeper into dynamic memory management in C.  
After learning the basics of `malloc` and `free`, I had to write my own utility functions to allocate, initialize, and structure memory in a more controlled way. The idea is to stop treating `malloc` as a black box and start handling errors, ranges, and initialization explicitly.  
Through these tasks, I also reinforced how process termination works with `exit`, and how higher-level helpers like `_calloc` and range-creation functions can be built on top of the standard library.

---

## Concepts Learned

- How to use `malloc` safely:
  - Check return values systematically.
  - Decide what to do when allocation fails (here: terminate with a specific status).
- How and when to use `exit`:
  - Forcing a controlled, explicit termination with a given exit code (e.g. `98`).
- The role of `calloc` (and by extension `_calloc`):
  - Allocates memory for an array and sets it to zero.
  - Difference between `malloc` (uninitialized) and `calloc` (zeroed).
- What `realloc` does conceptually:
  - Change the size of an already allocated memory block, preserving existing data up to the minimum of old/new sizes.
- Designing allocation helpers:
  - Wrapping raw `malloc`/`calloc` logic in custom functions that handle edge cases and errors consistently.
- Building higher-level abstractions:
  - Concatenating strings into a single allocated buffer.
  - Creating integer ranges in contiguous memory for later processing.

---

## Tasks

### `0-malloc_checked` – Trust no one
**Instruction:** Write a function that allocates memory using `malloc`.  
Prototype: `void *malloc_checked(unsigned int b);`

**Constraints:**
- Return a pointer to the allocated memory.
- If `malloc` fails, terminate the process with status code `98` (using `exit(98)` or equivalent).

**What I learned:**  
How to wrap `malloc` in a “safe” interface that either returns a valid pointer or stops the program in a controlled way, instead of leaving error handling to every caller.

---

### `1-string_nconcat` – `string_nconcat`
**Instruction:** Write a function that concatenates two strings.  
Prototype: `char *string_nconcat(char *s1, char *s2, unsigned int n);`

**Constraints:**
- Returned pointer points to a newly allocated buffer.
- Result contains `s1` followed by the first `n` bytes of `s2`, and is null-terminated.
- If `n` is greater or equal to the length of `s2`, use the entire `s2`.
- If `s1` or `s2` is `NULL`, treat it as an empty string.
- If allocation fails, return `NULL`.

**What I learned:**  
How to compute the size needed for a new buffer, handle `NULL` inputs gracefully, and manage string concatenation with manual memory allocation instead of relying on convenience library functions.

---

### `2-calloc` – `_calloc`
**Instruction:** Write a function that allocates memory for an array, using `malloc`.  
Prototype: `void *_calloc(unsigned int nmemb, unsigned int size);`

**Constraints:**
- Allocate memory for an array of `nmemb` elements of `size` bytes each.
- Return a pointer to the allocated memory.
- The allocated memory must be set to zero.
- If `nmemb` or `size` is `0`, return `NULL`.
- If `malloc` fails, return `NULL`.

**What I learned:**  
How to reimplement the behavior of `calloc` using `malloc` plus a manual zero-initialization step, and how to validate array dimensions before allocating.

---

### `3-array_range` – `array_range`
**Instruction:** Write a function that creates an array of integers.  
Prototype: `int *array_range(int min, int max);`

**Constraints:**
- The array must contain all values from `min` (included) to `max` (included), in ascending order.
- Return a pointer to the newly created array.
- If `min > max`, return `NULL`.
- If `malloc` fails, return `NULL`.

**What I learned:**  
How to translate an integer range into a contiguous array in memory, calculate its size correctly (`max - min + 1`), and fill it with a predictable sequence of values.

---

## Conclusion
This project strengthened my understanding of dynamic memory management in C:

- I learned to treat `malloc` failures as something that must be handled explicitly, not ignored.
- I implemented higher-level helpers such as string concatenation and range creation on top of raw allocation.
- I revisited the concepts behind `calloc` and `realloc` and how to design wrappers that simplify their use.

These patterns—checking every allocation, controlling process termination, building small allocation utilities—are essential for writing robust low-level code and will be reused in larger projects throughout the Holberton curriculum.

