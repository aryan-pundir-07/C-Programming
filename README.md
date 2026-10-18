# C Programming Journey

Hi, I'm Aryan. This repository is my growing collection of C exercises and small programs as I learn programming, practice problem-solving, and explore how core concepts work in code.

The programs are organized by topic, so you can follow along from the fundamentals or jump straight to an area you're interested in.

## Learning path

1. **Start with the basics** - input/output, variables, arithmetic, and simple calculations.
2. **Make decisions** - conditions, validation, and `switch` statements.
3. **Repeat and solve problems** - loops, number challenges, sequences, and patterns.
4. **Work with collections** - arrays and two-dimensional matrix operations.
5. **Understand memory** - pointers, strings, and dynamic allocation.
6. **Model related data** - structures, records, and small applied programs.

## Repository guide

| Folder | What's inside |
| --- | --- |
| [`basic/`](basic/) | First programs, ASCII values, conversions, and calculations |
| [`IF_Else/`](IF_Else/) | Conditional logic, comparisons, and input validation |
| [`LOOPS/`](LOOPS/) | Number problems, sequences, and printed patterns |
| [`switchcase.c/`](switchcase.c/) | `switch` exercises, calculators, and menu-driven programs |
| [`pointers.c/`](pointers.c/) | Pointer arithmetic, arrays, strings, and dynamic memory |
| [`structurs/`](structurs/) | Structures, student and employee records, vectors, and complex numbers |
| [`endsem.c/`](endsem.c/) | Matrix and two-dimensional array exercises |

Some folder names end in `.c`; those are directories containing multiple programs.

## A few examples

- [ASCII value](basic/ascii_value.c)
- [Fibonacci series](LOOPS/fibonacci_series.c)
- [Dynamic array with `malloc`](pointers.c/dynamic_array_malloc.c)
- [Student record](structurs/student_record.c)
- [Matrix transpose](endsem.c/transpose_matrix.c)
- [Simple calculator](switchcase.c/simple_calculator.c)

## Build and run

Install GCC or MinGW, open a terminal at the repository root, then compile a program. For example, in PowerShell:

```powershell
gcc basic/ascii_value.c -o basic/ascii_value.exe
.\basic\ascii_value.exe
```

On Linux or macOS, compile and run it like this:

```sh
gcc basic/ascii_value.c -o basic/ascii_value
./basic/ascii_value
```

Each source file is a small standalone exercise; compile the one you want to try. Generated executables are excluded from this repository.

## About this repository

This is a record of learning in progress. I'm adding and improving programs as I practice more C, so examples may grow or change over time.