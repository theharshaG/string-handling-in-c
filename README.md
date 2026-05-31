# string-handling-in-c

 C String Handling Programs

## Overview

This repository contains basic C programs demonstrating string handling concepts. These programs help in understanding character arrays, string input/output, string manipulation functions, and simple applications using strings.

The programs are useful for:

* Beginners learning C programming
* College laboratory exercises
* Coding interview preparation
* Logic-building practice
* Understanding string operations

---

## Programs Included

### 1. Read and Display String Using scanf()

This program accepts a string from the user and displays it.

#### Output Example

```text
Enter name: Harsha

Harsha
```

#### Concepts Used

* Character arrays
* String input using scanf()
* String output

---

### 2. Read Full Name Using fgets()

This program reads a complete name including spaces using `fgets()`.

#### Output Example

```text
Enter full name: Harsha Gowda

Harsha Gowda
```

#### Concepts Used

* Character arrays
* fgets()
* Reading strings with spaces

---

### 3. Find String Length Manually

This program calculates the length of a string without using library functions.

#### Output Example

```text
Enter name: Harsha

Length = 6
```

#### Concepts Used

* String traversal
* Null character ('\0')
* Looping through strings

---

### 4. Find String Length Using strlen()

This program calculates string length using the `strlen()` function.

#### Output Example

```text
Length = 6
```

#### Concepts Used

* string.h library
* strlen() function
* String length calculation

---

### 5. Copy String Using strcpy()

This program copies one string into another using `strcpy()`.

#### Output Example

```text
Harsha
```

#### Concepts Used

* String copying
* strcpy()
* Destination and source strings

---

### 6. Concatenate Strings Using strcat()

This program joins two strings together using `strcat()`.

#### Output Example

```text
Harsha Gowda
```

#### Concepts Used

* String concatenation
* strcat()
* String manipulation

---

### 7. Compare Strings Using strcmp()

This program compares two strings using `strcmp()`.

#### Output Example

```text
0
```

#### Concepts Used

* String comparison
* strcmp()
* Lexicographical comparison

---

### 8. Simple Login System

This program verifies username and password using string comparison.

#### Output Example

```text
Enter username: admin
Enter password: 1234

Login Successful
```

#### Concepts Used

* String comparison
* User authentication
* strcmp()
* Conditional statements

---

## Technologies Used

* C Programming Language
* GCC Compiler
* VS Code
* CodeBlocks
* Turbo C

---

## Project Structure

```text
c-string-handling-programs/
│
├── string_input_scanf.c
├── string_input_fgets.c
├── string_length_manual.c
├── string_length_strlen.c
├── string_copy.c
├── string_concatenation.c
├── string_comparison.c
├── login_system.c
└── README.md
```

---

## How to Compile

Compile a program:

```bash
gcc filename.c -o output
```

Run:

```bash
./output
```

---

## Learning Outcomes

After completing these programs, you will understand:

* Character arrays and strings
* String input methods
* String output methods
* String traversal
* String library functions
* String comparison techniques
* Basic authentication logic

---

## Future Improvements

Possible future additions:

* String Reverse Program
* Palindrome Checker
* Anagram Checker
* Vowel and Consonant Counter
* String Sorting
* Password Validation System
* Employee Login System
* Student Record Search Using Strings

---

## Author

**Harsha G**

Learning:

* C Programming
* Embedded Systems
* Python Development
* IoT Systems
* Problem Solving
