# singly_linked_lists

> Arrays are so last century — let's chain things together 🔗

---

## 📝 Description

This project introduces singly linked lists, one of the most fundamental data structures in computer science. Instead of storing data in contiguous memory like arrays, linked lists use nodes that each point to the next, allowing dynamic growth without reallocation. I implement the core operations from scratch: printing, counting, inserting at the head or tail, and freeing — all while managing heap memory carefully enough to make Valgrind nod approvingly.

---

## 🎯 Learning Objectives

At the end of this project, I am able to explain when and why to use linked lists over arrays, and vice versa. I understand the trade-offs: linked lists offer dynamic sizing and efficient insertion at either end, while arrays offer O(1) random access and better cache performance. I know how to build a singly linked list from scratch using a custom `list_t` struct, traverse it, add nodes at the beginning and end, compute its length, and free every node without leaking memory.

---

## 🛠️ Technologies Used

This project is written in C, compiled with `gcc` on Ubuntu 20.04 LTS using strict flags (`-Wall -Werror -Wextra -pedantic -std=gnu89`). Betty style is enforced. Memory management is verified with Valgrind. The `strdup` function is used where permitted for string copying. The advanced task uses a GCC constructor attribute to execute code before `main`.

---

## ⚙️ Requirements

- OS: Ubuntu 20.04 LTS
- Compiler: `gcc` with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files must end with a new line
- Code must follow the Betty style (checked with `betty-style.pl` and `betty-doc.pl`)
- No global variables allowed
- No more than 5 functions per file
- Only `malloc`, `free`, and `exit` from the standard library (`printf`, `puts`, etc. forbidden except where stated)
- `_putchar` is allowed and provided by the school
- All function prototypes (including `_putchar`) must be in the header file `lists.h`
- All header files must be include-guarded
- A `README.md` at the root of the project is mandatory
- Required data structure (defined in `lists.h`):

```c
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```

---

## 🚀 Installation

```bash
git clone https://github.com/GwenP88/holbertonschool-low_level_programming.git
cd holbertonschool-low_level_programming/singly_linked_lists
```

---

## ▶️ Usage / Execution

Compile each task with its corresponding files:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a && ./a
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-list_len.c -o b && ./b
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_node.c 0-print_list.c -o c && ./c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_node_end.c 0-print_list.c -o d && ./d
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e && valgrind ./e
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-first.c -o first && ./first
```

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

### Task 0 - Print list

- Mandatory
- Write a function that prints all elements of a `list_t` linked list
- Prototype: `size_t print_list(const list_t *h);`
- Returns the number of nodes; prints `[0] (nil)` if a node's `str` is NULL; `printf` is allowed

**Files:** `0-print_list.c`

---

### Task 1 - List length

- Mandatory
- Write a function that returns the number of elements in a `list_t` list
- Prototype: `size_t list_len(const list_t *h);`
- Traverses the entire list and counts each node

**Files:** `1-list_len.c`

---

### Task 2 - Add node

- Mandatory
- Write a function that adds a new node at the beginning of a `list_t` list
- Prototype: `list_t *add_node(list_t **head, const char *str);`
- `str` must be duplicated (using `strdup`); returns the address of the new node or NULL on failure

**Files:** `2-add_node.c`

---

### Task 3 - Add node at the end

- Mandatory
- Write a function that adds a new node at the end of a `list_t` list
- Prototype: `list_t *add_node_end(list_t **head, const char *str);`
- `str` must be duplicated (using `strdup`); returns the address of the new node or NULL on failure

**Files:** `3-add_node_end.c`

---

### Task 4 - Free list

- Mandatory
- Write a function that frees every node of a `list_t` list
- Prototype: `void free_list(list_t *head);`
- Must free both the `str` string and the node itself for each element; verified with Valgrind (0 leaks)

**Files:** `4-free_list.c`

---

### Task 5 - The Hare and the Tortoise

- Advanced - **This task is still in progress — my future self is on it.**
- Write a function that prints a message before `main` is executed, using a GCC constructor attribute
- Prints `You're beat! and yet, you must allow,\nI bore my house upon my back!\n` automatically before `main` runs
- `printf` is allowed; demonstrates the `__attribute__((constructor))` mechanism

**Files:** `100-first.c`

---

## 🔮 What’s Next

I plan to continue working on this project by completing the advanced tasks that are not done yet. This will allow me to deepen my understanding, improve my skills, and push a bit further beyond the basics (because stopping halfway is not really my style).

---

## 🤝 Contributions & Acknowledgements

A warm thank you to Holberton School for building this curriculum one data structure at a time. The tortoise task was a particularly delightful surprise — who knew a compiler attribute could make code run before `main`? The more you learn, the more you realize C is full of these little secrets. 🐢

---

## 👤 Author

**Gwenaelle PICHOT**
- Student at Holberton School
- Track: holbertonschool-low_level_programming
- Project: singly_linked_lists
