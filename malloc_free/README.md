![Shell Basics Banner](/assets/holberton.png)

# malloc, free – Holberton School Project

## Introduction
This project is my first real step into **dynamic memory allocation** in C.  
Up to this point, most variables I used were automatic (allocated on the stack, with lifetimes tied to the current scope). Here, I had to take explicit control over memory on the heap using `malloc` and `free`.

Working through these tasks, I learned when it makes sense to allocate memory dynamically (for variable-size data, grids, strings built at runtime), how to handle allocation failures safely, and how to use tools like `valgrind` to check that everything is properly freed and that no memory leaks are left behind.

---

## Concepts Learned

- Difference between **automatic allocation** and **dynamic allocation**:
  - Automatic: variables on the stack, managed by the compiler, limited lifetime (scope-based).
  - Dynamic: memory on the heap, managed manually via `malloc`/`free`, flexible lifetime.
- `malloc`:
  - How to request a specific number of bytes.
  - How to interpret the returned pointer and handle `NULL` when allocation fails.
- `free`:
  - How to release dynamically allocated memory.
  - Why every successful `malloc` must have a matching `free`.
- When to use dynamic allocation:
  - For arrays or data structures whose size is only known at runtime.
  - For objects that must outlive the scope that created them.
- Using `valgrind`:
  - Detecting memory leaks.
  - Verifying that all allocated blocks have been freed.
  - Ensuring no invalid reads/writes occur.

---

## Tasks

### `0-create_array` – Float like a butterfly, sting like a bee
**Instruction:** Write a function that creates an array of chars and initializes it with a specific character.  
Prototype: `char *create_array(unsigned int size, char c);`

**Constraints:**
- Return `NULL` if `size == 0`.
- Return a pointer to the newly allocated array, or `NULL` if allocation fails.
- The entire array must be initialized with the character `c`.

**What I learned:**  
How to allocate a simple one-dimensional buffer with `malloc`, check for failures, initialize every element, and return it to the caller for later use and freeing.

---

### `1-strdup` – The woman who has no imagination has no wings
**Instruction:** Write a function that returns a pointer to a newly allocated space in memory containing a copy of the string given as a parameter.  
Prototype: `char *_strdup(char *str);`

**Constraints:**
- If `str == NULL`, return `NULL`.
- On success, return a pointer to a new string that is a duplicate of `str`.
- Memory must be obtained with `malloc` and can be freed with `free`.
- Return `NULL` if there is insufficient memory.

**What I learned:**  
How to:
- Compute string length.
- Allocate exactly enough memory for a copy (including the null terminator).
- Copy the contents manually.
This is a direct, low-level understanding of what a standard function like `strdup` does internally.

---

### `2-str_concat` – He who is not courageous enough to take risks will accomplish nothing in life
**Instruction:** Write a function that concatenates two strings into a newly allocated buffer.  
Prototype: `char *str_concat(char *s1, char *s2);`

**Constraints:**
- The result is `s1` followed by `s2`, null-terminated.
- If `s1` or `s2` is `NULL`, treat it as an empty string.
- Return `NULL` if allocation fails.

**What I learned:**  
How to:
- Handle `NULL` inputs gracefully.
- Calculate the total required size based on the lengths of both strings.
- Concatenate two strings into a freshly allocated block instead of relying on fixed-size arrays.

---

### `3-alloc_grid` – If you even dream of beating me you'd better wake up and apologize
**Instruction:** Write a function that returns a pointer to a 2-dimensional array of integers.  
Prototype: `int **alloc_grid(int width, int height);`

**Constraints:**
- Each element of the grid must be initialized to `0`.
- If `width` or `height` is `0` or negative, return `NULL`.
- On failure (any allocation step), return `NULL`.

**What I learned:**  
How to:
- Allocate a 2D structure using `malloc` (array of pointers plus rows).
- Initialize every element.
- Think carefully about error handling: if one allocation fails, previously allocated memory must be cleaned up to avoid leaks.

---

### `4-free_grid` – It's not bragging if you can back it up
**Instruction:** Write a function that frees a 2-dimensional grid previously created by `alloc_grid`.  
Prototype: `void free_grid(int **grid, int height);`

**Constraints:**
- Function must correctly free all rows and then the array of row pointers.
- It is compiled together with `alloc_grid.c`, so both must be compatible.

**What I learned:**  
How to:
- Implement the “destructor” for a 2D dynamically allocated structure.
- Ensure that every `malloc` in `alloc_grid` has a corresponding `free` in `free_grid`.
- Validate the solution with `valgrind` to confirm there are no memory leaks.

---

## Conclusion
This project taught me to treat dynamic memory as a resource that I am fully responsible for:

- I practiced allocating and freeing simple buffers, duplicated strings, concatenations, and 2D arrays.
- I learned how to handle errors and edge cases like `NULL` inputs and invalid sizes.
- I used `valgrind` to verify that my code leaves no memory leaks.

These skills are a foundation for any low-level C work: data structures, file processing, and bigger projects all rely on correct dynamic memory management, and this project gave me the discipline and patterns to handle it properly.
