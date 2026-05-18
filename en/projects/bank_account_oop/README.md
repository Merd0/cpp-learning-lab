# Bank Account OOP Project

This project is the first modular OOP example in the repository. It separates
interface, implementation, demo code, and tests.

## Structure

```txt
bank_account_oop/
├── include/bank_account.h
├── src/bank_account.cpp
├── src/main.cpp
└── tests/test_bank_account.cpp
```

## Concepts

- Constructor validation.
- Private data and public behavior.
- Class invariants.
- `const` member functions.
- Exception-based validation for invalid input.
- Money represented as integer cents instead of floating point.
- Small assert-based tests.

## Build

Build from the repository root:

```bash
cmake -S . -B build
cmake --build build
ctest --test-dir build --output-on-failure
```
