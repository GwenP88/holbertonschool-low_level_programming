![Shell Basics Banner](/assets/holberton.png)

# Singly Linked Lists – Project README

## Introduction
This project marks my first deep dive into low-level data structures using the C language.  
The objective was to understand how linked lists work internally, how memory is allocated and freed, and how to manipulate nodes safely.  
Through these exercises, I strengthened my understanding of pointers, dynamic allocation, and struct-based data modeling — all essential skills for future C projects and for mastering low-level programming at Holberton.

## Learning Objectives
At the end of this project, I am able to:

- Explain when and why to use linked lists instead of arrays  
- Build, traverse, and manipulate singly linked lists (`list_t`)
- Manage memory dynamically with `malloc`, `free`, and `strdup`
- Implement common operations: printing, counting, inserting, appending, and freeing nodes

---

## Project Tasks

### **0. Print list**
**Objective:** Display all elements of a `list_t` linked list.  
**Expected behavior:**  
- Print each node according to the required format  
- If `str` is `NULL`, print `[0] (nil)`  
**Prototype:**  
`size_t print_list(const list_t *h);`  
**Constraint:**  
- Use of `printf` allowed  

---

### **1. List length**
**Objective:** Return the number of nodes in a `list_t` list.  
**Prototype:**  
`size_t list_len(const list_t *h);`  
**Expected:**  
- Traverse the list safely  
- Count nodes until reaching `NULL`

---

### **2. Add node**
**Objective:** Insert a new node at the beginning of the list.  
**Prototype:**  
`list_t *add_node(list_t **head, const char *str);`  
**Expected:**  
- Duplicate `str` using `strdup`  
- Allocate and initialize a new node  
- Update the head pointer  
**Constraints:**  
- Return `NULL` if allocation fails  

---

### **3. Add node at the end**
**Objective:** Append a new node at the end of the list.  
**Prototype:**  
`list_t *add_node_end(list_t **head, const char *str);`  
**Expected:**  
- Use `strdup`  
- Traverse to the last node  
- Insert a new node after it  
**Constraints:**  
- Return `NULL` on failure  

---

### **4. Free list**
**Objective:** Release all memory of a `list_t` list.  
**Prototype:**  
`void free_list(list_t *head);`  
**Expected:**  
- Free every node’s `str` and structure  
- Avoid memory leaks  

---

## Conclusion
This project provided a solid, practical foundation for manipulating dynamic data structures in C.  
By implementing each operation manually, I reinforced essential notions such as pointer handling, memory management, and traversal logic.  
These fundamentals will be crucial for the more advanced low-level projects of the Holberton curriculum and for writing safer, more efficient C programs.
