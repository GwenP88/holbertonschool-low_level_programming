# structures_typedef

> Teaching a computer about dogs — one struct at a time 🐾

---

## 📝 Description

This project dives into one of C's most useful features: structures and typedefs. I work with a custom `struct dog` type to explore how to group related data under one roof, initialize it, print it, dynamically allocate it, and — just as importantly — free it without leaving memory leaks behind. Think of it as learning how to responsibly adopt a dog: create it, care for it, and say goodbye cleanly.

---

## 🎯 Learning Objectives

At the end of this project, I am able to explain what structures are, when and why to use them over plain variables, and how to declare and access their members in C. I understand how `typedef` allows me to create cleaner, more readable type aliases — so instead of writing `struct dog` everywhere, I can simply write `dog_t` and feel like a professional. I can also dynamically allocate structures on the heap, properly copy strings into them, and release all allocated memory to keep Valgrind happy.

---

## 🛠️ Technologies Used

This project is written entirely in C, compiled with `gcc` on Ubuntu 20.04 LTS using strict flags (`-Wall -Werror -Wextra -pedantic -std=gnu89`). Code style is enforced with the Betty linter. Standard library usage is intentionally limited to `printf`, `malloc`, `free`, and `exit`.

---

## ⚙️ Requirements

- OS: Ubuntu 20.04 LTS
- Compiler: `gcc` with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files must end with a new line
- Code must follow the Betty style (checked with `betty-style.pl` and `betty-doc.pl`)
- No global variables allowed
- No more than 5 functions per file
- Only `printf`, `malloc`, `free`, and `exit` from the standard library
- All header files must be include-guarded
- A `README.md` at the root of the project is mandatory

---

## 🚀 Installation

```bash
git clone https://github.com/GwenP88/holbertonschool-low_level_programming.git
cd holbertonschool-low_level_programming/structures_typedef
```

---

## ▶️ Usage / Execution

Compile each task with the corresponding main file (provided for testing only):

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a && ./a
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-init_dog.c -o b && ./b
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_dog.c -o c && ./c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d && ./d
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-new_dog.c -o e && ./e
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-free_dog.c 4-new_dog.c -o f && valgrind ./f
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

### Task 0 - Poppy

- Mandatory
- Define a new type `struct dog` with three members: `name` (char *), `age` (float), and `owner` (char *)
- Must be declared in the header file `dog.h` with proper include guards
- Allows declaring and using a `struct dog` variable directly in main

**Files:** `dog.h`

---

### Task 1 - A dog is the only thing on earth that loves you more than you love yourself

- Mandatory
- Write a function `init_dog` that initializes a `struct dog` variable
- Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`
- Sets all three members of the struct from the provided arguments

**Files:** `1-init_dog.c`

---

### Task 2 - A dog will teach you unconditional love

- Mandatory
- Write a function `print_dog` that prints all fields of a `struct dog`
- Prototype: `void print_dog(struct dog *d);`
- If a string field is NULL, print `(nil)` instead; if `d` itself is NULL, print nothing

**Files:** `2-print_dog.c`

---

### Task 3 - Outside of a dog, a book is a man's best friend

- Mandatory
- Define a new type `dog_t` as a typedef alias for `struct dog`
- Added to the header file `dog.h` alongside the original struct definition
- Allows declaring `dog_t my_dog;` instead of `struct dog my_dog;`

**Files:** `dog.h`

---

### Task 4 - A door is what a dog is perpetually on the wrong side of

- Mandatory
- Write a function `new_dog` that dynamically creates a new dog
- Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
- Must store copies of `name` and `owner` (not just pointers); returns NULL on failure

**Files:** `4-new_dog.c`

---

### Task 5 - How many legs does a dog have if you call his tail a leg?

- Mandatory
- Write a function `free_dog` that properly frees a dynamically allocated `dog_t`
- Prototype: `void free_dog(dog_t *d);`
- Must free all allocated memory including copied strings; verified with Valgrind (0 leaks)

**Files:** `5-free_dog.c`

---

## 🤝 Contributions & Acknowledgements

Big thanks to the Holberton School staff and fellow students for the dog-themed tasks — learning about structs has never been this wholesome. Poppy the dog deserves a special mention for being the world's most patient test subject. 🐕

---

## 👤 Author

**Gwenaelle PICHOT**
- Student at Holberton School
- Track: holbertonschool-low_level_programming
- Project: structures_typedef
