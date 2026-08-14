# C++ Journey

A collection of C++ programs and concepts explored while learning the language. This repository tracks my progress through fundamental and intermediate C++ topics.

## Topics Covered

### Function Overloading
**File:** `Function_overloading.cpp`

Function overloading allows multiple functions to share the same name while accepting different parameters (types or counts). This enables creating related functions that perform similar operations on different inputs.

```cpp
int area(int length, int breadth); // rectangle
int area(int length);              // square
```

The compiler selects the correct function based on the arguments passed at the call site.

### Default Arguments
**File:** `Default_Argument.cpp`

Default arguments allow specifying default values for function parameters in the declaration. When an argument is omitted, the compiler uses the predefined default.

```cpp
int multiply(int a, int b = 2);
// multiply(5)  -> uses b = 2
// multiply(5, 4) -> uses b = 4
```

Default values are applied from right to left; non-default parameters cannot follow default parameters in the parameter list.

### Macros
**File:** `Macros.cpp`

Macros are preprocessor directives defined with `#define` that perform textual substitution before compilation. They are commonly used for inline constants or simple function-like expansions.

```cpp
#define mul(a, b) a * b
#define add(a, b) a + b
```

Unlike real functions, macros do not perform type checking and are expanded purely by the preprocessor.

### Inline Functions
**File:** `inline.cpp`

Inline functions suggest to the compiler that the function body should be expanded at the call site instead of performing a standard function call. This can reduce call overhead for small, frequently used functions.

```cpp
inline int add(int a, int b)
```

The compiler may ignore the `inline` suggestion based on optimization decisions.

## Getting Started

Each `.cpp` file in this repository is a standalone, compilable program. To run any example:

```bash
g++ filename.cpp -o output && ./output
```

## Learning Path

- Basics of Functions
- Function Overloading
- Default Arguments
- Macros and Preprocessor Directives
- Inline Functions
