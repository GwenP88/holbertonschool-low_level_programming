![Shell Basics Banner](/assets/holberton.png)

# Doubly Linked Lists – Project README

## Introduction
This project explores **doubly linked lists**, a fundamental dynamic data structure used when bidirectional traversal is required.  
Through this series of tasks, I learned how to implement, manipulate, and manage memory for a `dlistint_t` list, strengthening my mastery of pointers, node linking, and list navigation.  
This project also encouraged autonomy in searching for the right information — a core skill for progressing in low-level programming.

## Learning Objectives
At the end of this project, I am able to:

- Define what a doubly linked list is and how it differs from singly linked lists  
- Use forward and backward traversal efficiently  
- Insert, delete, and access nodes at precise positions  
- Safely allocate, link, and free nodes  
- Identify and consult relevant documentation without heavy guidance  

---

## Project Tasks

### **0. Print list**
**Objective:** Print all elements of a `dlistint_t` list.  
**Prototype:**  
`size_t print_dlistint(const dlistint_t *h);`  
**Expected:**  
- Traverse nodes from head to tail  
- Display data according to required formatting  
- Return number of nodes printed  

---

### **1. List length**
**Objective:** Return the number of nodes in a `dlistint_t` list.  
**Prototype:**  
`size_t dlistint_len(const dlistint_t *h);`  
**Expected:**  
- Count nodes until reaching `NULL`  

---

### **2. Add node (beginning)**
**Objective:** Insert a new node at the start of the list.  
**Prototype:**  
`dlistint_t *add_dnodeint(dlistint_t **head, const int n);`  
**Expected:**  
- Allocate and initialize a new node  
- Update `prev` and `next` pointers correctly  
- Return new node address or `NULL` on failure  

---

### **3. Add node at the end**
**Objective:** Append a node to the end of the list.  
**Prototype:**  
`dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`  
**Expected:**  
- Traverse to last node  
- Link new node with correct `next` and `prev` links  
- Return new node or `NULL` on failure  

---

### **4. Free list**
**Objective:** Free an entire `dlistint_t` list.  
**Prototype:**  
`void free_dlistint(dlistint_t *head);`  
**Expected:**  
- Free every node safely  
- Prevent memory leaks  

---

### **5. Get node at index**
**Objective:** Return the node at a specific index.  
**Prototype:**  
`dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`  
**Expected:**  
- Traverse until reaching the index  
- Return pointer to node or `NULL` if out of range  

---

### **6. Sum list**
**Objective:** Compute the sum of all `n` values in a `dlistint_t` list.  
**Prototype:**  
`int sum_dlistint(dlistint_t *head);`  
**Expected:**  
- Iterate through list  
- Return sum or 0 for an empty list  

---

### **7. Insert at index**
**Objective:** Insert a new node at a given position.  
**Prototype:**  
`dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`  
**Expected:**  
- Insert at any valid index  
- Manage four cases: head insert, middle insert, tail insert, invalid index  
- Return address of new node or `NULL` on failure  
**Note:**  
- Functions from tasks 2 and 3 are used during correction  

---

### **8. Delete at index**
**Objective:** Delete the node at a specific index.  
**Prototype:**  
`int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`  
**Expected:**  
- Handle deletion at head, middle, or tail  
- Update links correctly  
- Return `1` on success, `-1` on failure  

---

## Conclusion
This project provided a comprehensive understanding of how doubly linked lists operate and how powerful they are for bidirectional data traversal.  
Implementing insertion, deletion, access, and memory management reinforced critical low-level programming techniques while developing the autonomy required for exploring documentation and technical references.  
These skills will support future Holberton projects involving complex data structures, algorithms, and dynamic memory handling.

