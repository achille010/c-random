
<div align="center">

<img src="https://skillicons.dev/icons?i=c&theme=dark&perline=1" alt="C" />

**Built with C**
# c-random

</div>

This repo contains all codes in C that are not a part of competitive programming like CSES that I do for better understanding.

## Overview

c-random is a collection of C programs written for learning, experimentation, and better understanding of programming concepts. Unlike competitive programming solutions, these programs focus on exploring C language fundamentals, algorithms, and problem-solving techniques in a practice-oriented environment.

## How It Works

The repository contains individual C files, each demonstrating a specific concept or solving a particular problem:

**1toN.c**: Program to print numbers from 1 to N
```c
// Demonstrates basic loops and iteration
```

**Grades.c**: Grade calculation or classification program
```c
// Implements conditional logic for grade assignment
```

**frequency.c**: Character or element frequency counter
```c
// Counts occurrences of elements in arrays or strings
```

**primeValidator.c**: Prime number validation program
```c
// Checks if a given number is prime
```

**rev.C**: String or number reversal program
```c
// Reverses the order of characters or digits
```

**strstr.c**: String search implementation
```c
// Finds substring within a larger string
```

### Core Functionality

1. **Learning Exercises**: Programs written to understand C concepts
2. **Algorithm Practice**: Implementations of common algorithms
3. **Problem Solving**: Solutions to programming challenges outside competitive platforms
4. **Concept Exploration**: Experiments with C language features and libraries

### Topics Covered

The code samples demonstrate:
1. Loops and iteration (for, while, do-while)
2. Conditional statements (if-else, switch)
3. Arrays and strings manipulation
4. Functions and modular programming
5. Input/output operations
6. Mathematical computations
7. String processing algorithms

### Key Concepts Demonstrated

- **C Fundamentals**: Variables, data types, operators, and control structures
- **Memory Management**: Pointers, arrays, and dynamic allocation
- **Algorithm Design**: Efficient solutions to common problems
- **Standard Library**: Using stdio.h, string.h, and other standard headers
- **Problem Decomposition**: Breaking problems into manageable functions

## Installation

1. Clone the repository:
```bash
git clone https://github.com/achille010/c-random.git
cd c-random
```

2. Compile a program:
```bash
gcc -o 1toN 1toN.c
```

3. Run the executable:
```bash
./1toN
```

4. Or compile with warnings enabled:
```bash
gcc -Wall -o primeValidator primeValidator.c
```

## Usage Examples

### 1 to N Program
```bash
# Compile and run
gcc -o 1toN 1toN.c
./1toN
# Input: 10
# Output: 1 2 3 4 5 6 7 8 9 10
```

### Prime Validator
```bash
# Compile and run
gcc -o primeValidator primeValidator.c
./primeValidator
# Input: 17
# Output: 17 is a prime number
```

### String Reversal
```bash
# Compile and run
gcc -o rev rev.C
./rev
# Input: hello
# Output: olleh
```

## Limitations

- Programs are for learning and practice purposes
- Not optimized for production use
- May lack comprehensive error handling
- Compiled executables (.exe) are included (typically not best practice for repos)
- Code focuses on concept demonstration over code optimization

This is intentionally a collection of practice and learning exercises in C.

## Requirements

- C compiler (gcc, clang, or MSVC)
- Basic understanding of C programming
- Terminal or command prompt

## Contributing

Contributions are welcome! Feel free to fork this repository and submit pull requests for improvements.

## License

MIT License - Read details from the LICENSE file

---

*Built as a collection of C practice programs for learning and understanding*
