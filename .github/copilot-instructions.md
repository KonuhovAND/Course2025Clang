# Copilot Instructions for Course2025Clang

## Project Overview
This is a C++ learning repository documenting a progression from fundamental concepts (day 4-11) through object-oriented programming (day 12+). Each day is a self-contained exercise demonstrating specific C++ concepts. Days are isolated with minimal inter-day dependencies.

## Code Organization

### Directory Structure
- **Individual day folders**: `day{N}/task.cpp` contains the primary exercise code
- **Headers folder**: `day{N}/headers/` contains `.h` and `.cpp` pairs for class definitions and implementations
- **Build artifacts**: Compiled binaries (e.g., `task`, `main`) and output files stored alongside source

### Header/Implementation Pattern
Classes use header/implementation separation:
- **Headers** (`.h`): Class declarations with `#pragma once` guards
- **Implementation** (`.cpp`): Method definitions that `#include` the corresponding header
- Example: `day13/headers/my_class.h` + `day13/headers/my_class.cpp`

## C++ Compilation & Execution

### Standard Build Command
```bash
g++ -std=c++20 % -o %< && ./%<
```
This compiles with C++20 standard and executes immediately. Individual days may have compiled binaries already present.

### Key Compiler Flags
- `-std=c++20`: Consistent across the course for modern C++ features
- Single-file compilation typical; multi-file days use header includes
- No makefile—direct compilation commands expected

## Programming Patterns & Conventions

### Class Design
- **Constructor overloading**: Default and parameterized constructors common (e.g., `weapon()` and `weapon(const char*, float, float)`)
- **Delegating constructors**: `weapon() : weapon("weapon", 1, 1) {}` delegates to parameterized version
- **Destructors**: Explicit destructors print debug info on destruction
- **Friend classes**: Used for access privileges (e.g., `friend class Characteristic`)
- **Method overloading**: Same method name with different signatures (e.g., `summ_weights(weapon&)` vs `summ_weights(int)`)

### Inheritance & Polymorphism
- **Single inheritance**: `one_time_weaopn : public weapon` (note: typo in class name is preserved)
- **Base class reference**: Parent methods available in derived classes
- **Enums for type safety**: `enum TypeOfWeapon { BOW, ... }` used in magic weapons

### Memory Management
- **Stack allocation**: Default for simple objects (`weapon sword(...)`)
- **Heap allocation**: `new` for dynamic objects; explicit `delete` cleanup required
- **Pointer syntax**: Both `paxe->method()` and `(*paxe).method()` used interchangeably

### Include Conventions
```cpp
#include <iostream>           // Standard library
#include <cstring>           // For strcpy
#include <fstream>           // For file I/O
#include "./headers/my_class.h"  // Local headers with relative paths
using std::cout, std::cin, std::endl;  // Structured using declarations
```

### Output Formatting
- **Spacer function**: `spacer()` prints 18 dashes with newlines for visual separation
- **Trailing newlines**: Inconsistent—add based on context
- **Multi-line output**: Using `<<` operators with `endl`

## Specific Patterns by Day Range

### Days 4-11: Fundamentals
- Bitwise operations, arithmetic, basic I/O
- Simple functions, no classes yet
- Comments often in Russian (preserved as-is)

### Days 12-16: Object-Oriented Programming
- Class hierarchies (weapon → magic_weapon → one_time_weapon)
- Struct definitions (e.g., `Player` struct in day16)
- File I/O with `std::fstream`
- Method parameter validation (weight limits, type checks)

### Day 20: File Operations & Advanced I/O
- `readFile()`: Opens, reads line-by-line, closes
- `eraseFile()`: Truncates file (note: typo in function name "earaseFile")
- Uses `std::getline()` for input with newline handling
- Regex support included (`#include <regex>`)

## Common Gotchas & Preserved Quirks
- **Typos preserved**: Function `earaseFile()` and class `one_time_weaopn` are intentional (learning artifacts)
- **Mutable char arrays**: `char name[40]` with `strcpy()`; no bounds checking
- **Inconsistent namespacing**: Mix of `using` declarations and `std::` prefixes
- **File I/O assumptions**: Relative paths (`"output.txt"`) may fail depending on working directory

## When Adding Features or Fixing Bugs
1. Maintain day-level isolation—don't refactor across multiple days
2. Respect header/implementation separation in multi-file days
3. Keep C++20 standard for compilation consistency
4. Match existing style: inline spacers, structured output, explicit memory cleanup
5. Preserve typos and quirks unless explicitly correcting a learning exercise
6. Use `std::string` when present, fall back to char arrays for consistency with existing code

## External Dependencies
- **Standard library only**: No external packages (no boost, no third-party libs)
- **Math constants**: `#define _USE_MATH_DEFINES` + `#include <cmath>` for `M_PI`
