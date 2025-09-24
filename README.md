## DSA Prep 🚀🖥️

A personal workspace for practicing Data Structures and Algorithms in C. This repo contains small, focused programs implementing classic data structures (stack, queue, circular queue, doubly queue) and algorithms (sorting, array utilities, matrix operations), along with a few problem-specific solutions.

### Folder contents (examples)
- `bubblesort.c`, `selectionsort.c`: Sorting algorithms
- `stack.c`, `stacklocal.c`: Stack implementations and local tests
- `queue.c`, `queuelocal.c`, `circularqueue.c`: Queue implementations (linear and circular)
- `doublyqueue.c`: Queue using a doubly-linked approach
- `localarr.c`, `update2dArr.c`, `sumofrows.c`: Array and matrix utilities
- `pall.c`: Palindrome or related utility (name shorthand)
- `leet19.c`: LeetCode-style problem solution (e.g., problem 19)

### How to build and run (Windows, gcc/MinGW)
1. Ensure gcc is installed and available in PATH (e.g., via MinGW or MSYS2).
2. From this folder, compile any C file to an executable:

```bash
gcc bubblesort.c -o bubblesort.exe
```

3. Run the program:

```bash
./bubblesort.exe
```

Replace `bubblesort.c` with any other file you want to build and test.

### Notes
- Each file is intended to be compiled independently and typically contains its own `main` function for quick testing.
- Executables like `stack.exe`, `queuelocal.exe`, etc., are kept for convenience; you can recompile them anytime after making changes.

### Roadmap ideas (optional)
- Add input validation and more test cases
- Split reusable data structures into headers (`.h`) and sources (`.c`)
- Document time/space complexities in each file
- Add a simple `Makefile` or build script for common targets

### License
Personal practice repository. Choose and add a license if you plan to share or accept contributions.


