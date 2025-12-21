

# Assignment 3 Pointer Variables✅

Short Notes on Pointer Variables

---

## 1. Normal Variables vs Pointers

The fundamental difference is what each stores and how memory is accessed.

| Feature | Normal Variable | Pointer |
|---|---:|---|
| Storage | Stores a direct value (e.g., `int x = 10;`) | Stores the memory address of another variable (e.g., `int *p`) |
| Memory access | Directly via the variable name | Indirectly via the address held by the pointer |
| Reading value | Returns the stored data | Returns the address unless dereferenced with `*` |
| Modification | Updating the variable updates its stored value | Updating the pointer changes the address it points to |

---

## 2. Declaration & Key Operators 🔧

- Normal variable: `int a = 10;` — memory holds the value `10`.
- Pointer variable: `int *p = &a;` — memory holds the address of `a`.

Key operators:
- `*` (asterisk): declares a pointer type and dereferences a pointer (indirection).
- `&` (ampersand): address-of operator — yields the address of a variable.

---
## 3.Dereferencing a pointer `* `
- Dereferencing is the act of accessing the data located at the address stored in a pointer. This is done using the `*` operator (the "indirection" operator) on an already declared pointer.

Example:
```c
int x = 50;
int *ptr = &x; // ptr holds the address of x

// Read via dereference
printf("%d", *ptr); // prints: 50

// Modify via dereference
*ptr = 100; // x becomes 100
```

---

## 4. Common Use Cases 💡

- **Dynamic memory allocation:** When the size of data (like an array) isn't known until runtime, pointers allow us to allocate memory on the "Heap" using malloc or new.
- **Passing large structures:** Instead of copying a 1MB object into a function (which is slow), we pass a pointer (8 bytes), allowing the function to work on the original data efficiently.
- **Data structures:** Pointers are essential for linked lists, trees, graphs, etc.

---

## 5. Risks & Limitations ⚠️

- **Dangling pointers:** A pointer pointing to a memory location that has been deleted/freed.
- **Memory leaks:** Forgetting to free memory allocated via pointers, leading to wasted RAM.
- **Segmentation faults:** Attempting to access or "dereference" a null or uninitialized pointer, causing the program to crash.

---

## 6. Call by Value vs Call by Reference 📞

**Call by value:** a copy is passed to the function — original is unchanged.
```c
void foo(int a) { a = 10; } // caller's variable unaffected
```

**Call by reference:** the address is passed so the function can modify the original.
```c
void foo(int *a) { *a = 10; } // caller's variable is modified
```
---

### 7. When to use which?
Use **call by value:**
- For small, simple data types (int, char, float).
- When you want to ensure the function cannot accidentally modify the original data (Safety/Immutability).

Use **call by reference:** 
- When a function needs to modify the caller's variables (e.g., a `sort` or `swap` function).
- When passing large objects or arrays to avoid the performance overhead of copying.

---

### Quick Tips ✅

- Initialize pointers (`int *p = NULL;`).
- Check results of dynamic allocation before use.
- Free allocated memory when done (`free(ptr);`).
- Prefer `const` pointers when the function should not modify the pointed data.

---
