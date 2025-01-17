# FORTRAN Compiler using Flex/Bison

Welcome to the **FORTRAN Compiler** project! This project demonstrates how to build a simple, working compiler for a subset of the **FORTRAN** programming language using **Flex** (for lexical analysis) and **Bison** (for syntax analysis). The goal of this project is to provide an educational resource for those interested in compiler construction, particularly in using Flex and Bison for tokenization and parsing.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [File Structure](#file-structure)
- [Contributing](#contributing)
- [License](#license)

## Introduction

This project serves as a simple example of how to build a compiler for a subset of the **FORTRAN** programming language. It focuses on the basic components of a compiler:
- **Lexical Analysis** (using Flex)
- **Syntax Analysis** (using Bison)
- **Basic Error Handling**

The compiler supports a limited subset of FORTRAN constructs and syntax, which can be extended to handle more complex features in the future.

## Features

- **Lexical Analysis with Flex**: Breaks input FORTRAN source code into tokens, such as keywords (`PROGRAM`, `REAL`, `INTEGER`, `CHARACTER`, `LOGICAL`, etc.), identifiers, constants, and operators.
- **Syntax Analysis with Bison**: Parses the tokens and ensures the structure of the FORTRAN code is valid according to the defined grammar.
- **Supported FORTRAN Constructs**:
  - `PROGRAM` and `END PROGRAM`
  - Variable declarations (e.g., `REAL :: x`, `INTEGER :: i`, `CHARACTER :: str`, `LOGICAL :: flag`)
  - Control structures such as `IF`, `THEN`, `ELSE`, `ENDIF`
  - Loop structures like `DO` and `ENDDO`
  - Subroutine calls using `CALL`
  - `PRINT` statements for output
  - Logical and relational operators (`.AND.`, `.OR.`, `.NOT.`, `>`, `<`, `>=`, `<=`, `==`, `!=`)
  - Arithmetic expressions with `+`, `-`, `*`, `/`
  - String handling with `CHARACTER` and `STRING`
  - Logical constants (`.TRUE.`, `.FALSE.`)
- **Error Handling**: Provides informative error messages for syntax issues, such as unmatched parentheses, incorrect statement formats, or mismatched program names.

## Installation

To install and set up the project, follow these steps:

1. **Clone the repository**:
    ```bash
    git clone https://github.com/AHM-ID/FORTRAN_Compiler.git
    cd FORTRAN_Compiler
    ```

2. **Install Flex and Bison**:

   - On **Ubuntu**:
     ```bash
     sudo apt-get install flex bison
     ```
   - On **Fedora**:
     ```bash
     sudo dnf install flex bison
     ```
   - On **Arch**:
     ```bash
     sudo pacman -S flex bison
     ```

3. **Build the compiler**:
    ```bash
    ./scripts/build.sh
    ```

## Usage

Once you've built the compiler, you can use it to compile and run FORTRAN code. Here's how:

1. **Write your FORTRAN code** in a file, e.g., `src/fortran_code.f`.

2. **Run the compiled program** with the provided script:
    ```bash
    ./scripts/run.sh
    ```

3. **Alternatively**, you can directly run the compiled program on your FORTRAN source code:
    ```bash
    ./src/fortran < your_fortran_code.f
    ```

## File Structure

The project contains the following key files:

- **`src/fortran.l`**: Lexical analyzer definition using Flex. Defines how to tokenize FORTRAN code.
- **`src/fortran.y`**: Syntax analyzer definition using Bison. Specifies the grammar and how to parse tokens into a valid structure.
- **`src/fortran_code.f`**: A sample FORTRAN code for testing the compiler. You can modify this or add new files to test other aspects of the compiler.
- **`scripts/build.sh`**: A script that automates the build process for the compiler.
- **`scripts/run.sh`**: A script to execute the compiler on your FORTRAN source code.

## Contributing

Contributions are welcome! If you find any bugs or want to extend the compiler's features, feel free to fork the repository, make your changes, and submit a pull request.

## License

This project is licensed under the **MIT License**.