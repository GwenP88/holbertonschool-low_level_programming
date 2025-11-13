# Structures & Typedef – Holberton School Project

## Introduction
This project is where C started to feel more like a real-world language and less like a collection of isolated functions and primitive types.  
By working with `struct` and `typedef`, I learned how to model real entities (here: dogs) with multiple attributes, how to group related data in a single type, and how to manage these objects safely in memory (creation, initialization, printing, destruction).  
This README summarizes the concepts I learned and what each task brought in terms of practice and mindset.

---

## Concepts Learned

- What a **structure** is in C and why we use it:
  - Grouping several related pieces of data into a single logical unit.
  - Representing real-life entities with multiple attributes (name, age, owner, etc.).
- How to **declare** and **use** a `struct` type.
- How to pass and manipulate **pointers to structures**.
- How to properly **initialize** a struct (stack and heap cases).
- How to handle **NULL fields** safely when reading or printing a struct.
- How and why to use **`typedef`**:
  - Creating a shorter, more readable alias for a complicated type (`dog_t` vs `struct dog`).
- Memory management for structured data:
  - Allocating memory dynamically for a struct and its fields.
  - Creating copies of strings when building a struct.
  - Writing a clean **free** function to release all allocated memory (no leaks).

---

## Tasks

### `0-poppy` – Define `struct dog`
**Instruction:** Define a new type `struct dog` with the following fields:
- `name` (char *)
- `age` (float)
- `owner` (char *)

**Constraints:** The structure must be declared in `dog.h` and included correctly.  
**What I learned:** How to define a basic `struct` type and use it to group data that belongs together.

---

### `1-init_dog` – Initialize a `struct dog`
**Instruction:** Write a function that initializes a variable of type `struct dog`.  
Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`

**Constraints:**  
- Function must handle the pointer parameter correctly.  
- The caller passes the address of an existing `struct dog`.  

**What I learned:** How to initialize a struct via a pointer, and how to set its fields from function parameters in a clean and reusable way.

---

### `2-print_dog` – Print a `struct dog`
**Instruction:** Write a function that prints a `struct dog`.  
Prototype: `void print_dog(struct dog *d);`

**Constraints:**  
- If `d` is `NULL`, print nothing.  
- If any field is `NULL`, print `(nil)` for that field (e.g. `Name: (nil)`).  
- Allowed to use the standard library.  

**What I learned:** How to safely handle `NULL` pointers and `NULL` fields inside a struct, and how to design a robust “print” function that doesn’t crash on incomplete data.

---

### `3-dog_t` – `typedef` for `struct dog`
**Instruction:** Define a new type `dog_t` as a new name for `struct dog`.  

**Constraints:**  
- The alias must be defined in `dog.h`.  

**What I learned:** How to use `typedef` to simplify type names and make code more readable, especially when the original type name is verbose.

---

### `4-new_dog` – Create a new dog (dynamic allocation)
**Instruction:** Write a function that creates a new dog.  
Prototype: `dog_t *new_dog(char *name, float age, char *owner);`

**Constraints:**  
- Must allocate memory for the struct and for copies of `name` and `owner`.  
- Must store **copies** of `name` and `owner`, not just pointers to the original strings.  
- Must return `NULL` if allocation fails (for the struct or any field).  

**What I learned:**  
- How to dynamically allocate a struct and its internal fields.  
- How to properly copy strings into dynamically allocated memory.  
- How to handle failures cleanly (checking each allocation step and returning `NULL` if something goes wrong).

---

### `5-free_dog` – Free a dog
**Instruction:** Write a function that frees a `dog_t`.  
Prototype: `void free_dog(dog_t *d);`

**Constraints:**  
- Must free all dynamically allocated memory associated with the dog (strings and struct).  
- Must be safe to call with a pointer previously returned by `new_dog`.  

**What I learned:**  
- How to implement a corresponding “destructor” function for a dynamically allocated struct.  
- How to ensure there are no memory leaks by freeing every piece of memory that was allocated for the object.

---

## Conclusion
This project taught me how to model data properly in C using `struct` and how to simplify type handling with `typedef`.  
I moved from manipulating separate primitive variables to thinking in terms of **data structures**: creation, initialization, use, printing, and destruction.  
These are core skills for writing clean, maintainable C code in bigger projects, where well-designed structures and correct memory management make the difference between fragile code and robust software.

