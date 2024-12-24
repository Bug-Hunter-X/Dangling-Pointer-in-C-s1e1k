# Dangling Pointer Bug in C
This repository demonstrates a common error in C programming: dangling pointers.  A dangling pointer occurs when a pointer variable refers to memory that has been deallocated or freed, leading to unpredictable behavior.  This example shows how to reproduce the error and provides a potential solution.

**Bug:** The code attempts to modify a variable through a dangling pointer, leading to undefined behavior.

**Solution:** A more robust approach is to avoid the use of dangling pointers altogether by careful memory management.