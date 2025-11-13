![Shell Basics Banner](/assets/holberton.png)

# Recursion – Holberton School Project

## Introduction
This project was my first deep dive into **recursion**, a fundamental concept in computer science.  
Instead of solving problems through loops and iteration, I had to think in terms of **breaking a problem into smaller subproblems**, moving step by step toward a base condition.

Working with recursion forced me to understand:
- how the call stack behaves,
- how functions call themselves,
- how to design a correct base case,
- and when recursion becomes more powerful—or more dangerous—than iteration.

This project also taught me where recursion shines (mathematics, tree structures, divide-and-conquer) and where it should be avoided (very large inputs, expensive depth, risk of stack overflow).

---

## Concepts Learned

- **What recursion is**  
  A function calling itself with a reduced version of the same problem until a base case is reached.

- **How to implement recursion**  
  - Always define a base case (stop condition).  
  - Reduce the problem at every call.  
  - Avoid infinite recursion by ensuring progress toward the base case.

- **When to use recursion**  
  - Natural mathematical definitions (factorial, exponentiation, Fibonacci).  
  - String or array traversal when each step reduces the input size.  
  - Searching, tree algorithms, backtracking, and divide-and-conquer techniques.

- **When not to use recursion**  
  - When input depth may cause stack overflow.  
  - When iterative solutions are simpler or more efficient.  
  - When each recursive call has heavy overhead.

---

## Tasks

### `0-puts_recursion` – She locked away a secret...
**Instruction:** Write a function that prints a string followed by a new line.  
Prototype: `void _puts_recursion(char *s);`

**Constraints:**
- Mimics the behavior of `puts`.
- Print characters one by one recursively until reaching the end of the string.

**What I learned:**  
How to traverse a string recursively and how to structure a base case for terminating a simple recursion.

---

### `1-print_rev_recursion` – Why is it so important to dream?
**Instruction:** Print a string in reverse using recursion.  
Prototype: `void _print_rev_recursion(char *s);`

**Constraints:**
- Recursion must be used for reversing.
- The last character is printed first.

**What I learned:**  
That recursion naturally handles reverse order by letting calls stack up before printing, illustrating the LIFO behavior of the call stack.

---

### `2-strlen_recursion` – Dreams feel real while we're in them
**Instruction:** Return the length of a string.  
Prototype: `int _strlen_recursion(char *s);`

**Constraints:**
- Must use recursion, not loops.
- Stop counting at the null terminator.

**What I learned:**  
How to express repeated counting through recursive accumulation, and how to build a simple recursive return chain.

---

### `3-factorial` – You mustn't be afraid to dream a little bigger
**Instruction:** Return the factorial of a given number.  
Prototype: `int factorial(int n);`

**Constraints:**
- If `n < 0`, return `-1`.  
- `0! = 1`.

**What I learned:**  
How mathematical recursion maps directly into code, and how base cases prevent infinite recursion for invalid inputs.

---

### `4-pow_recursion` – Once an idea takes hold...
**Instruction:** Return `x` raised to the power `y`.  
Prototype: `int _pow_recursion(int x, int y);`

**Constraints:**
- If `y < 0`, return `-1`.

**What I learned:**  
Exponentiation as repeated multiplication through recursion, and how to propagate errors via return values.

---

### `5-sqrt_recursion` – Your subconscious is looking for the dreamer
**Instruction:** Return the natural square root of a number.  
Prototype: `int _sqrt_recursion(int n);`

**Constraints:**
- If no natural square root exists, return `-1`.

**What I learned:**  
How to implement recursive search for a solution (incrementing a candidate), illustrating recursive iteration without loops.

---

### `6-is_prime_number` – Inception. Is it possible?
**Instruction:** Return 1 if the number is prime, otherwise 0.  
Prototype: `int is_prime_number(int n);`

**Constraints:**
- Check primality using recursive division tests.

**What I learned:**  
How recursion can replace loops for incremental testing, and how to divide a problem into smaller checks while preserving state between calls.

---

### `100-is_palindrome` *(advanced)* – We can do almost anything
**Instruction:** Return 1 if a string is a palindrome.  
Prototype: `int is_palindrome(char *s);`

**Constraints:**
- Empty string counts as a palindrome.
- Must compare symmetric characters recursively.

**What I learned:**  
How recursion can elegantly traverse two ends of a string simultaneously, reducing the problem at both boundaries.

---

### `101-wildcmp` *(advanced)* – Now, before you tell me it's impossible...
**Instruction:** Compare two strings and return 1 if they can be considered identical.  
Prototype: `int wildcmp(char *s1, char *s2);`

**Constraints:**
- `s2` may contain `*` wildcards.
- `*` can match **any** string, including empty.

**What I learned:**  
How recursion is essential for pattern matching with branching logic, since `*` creates multiple possible paths to explore.

---

## Conclusion
This project taught me how powerful recursion is—but also how careful I need to be when using it.

I learned to design clear base cases, reduce the problem step by step, and ensure that each recursive call eventually terminates. I also saw how recursion naturally fits certain problems (mathematics, strings, primality, palindromes) and becomes indispensable for complex pattern matching.

Beyond syntax, recursion changed the way I think: breaking problems into smaller versions of themselves and trusting the call stack to rebuild the solution on the way back up.
