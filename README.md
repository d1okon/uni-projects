# School Projects - C Programming

This repository contains solutions for the laboratory exercises (LAB) of the course.

## Lab Exercises Description

### 1. Exercise 9.1 (lab9.1.c)
This program demonstrates basic file handling and data filtering in C.
* **Functionality**: The user enters integers via the keyboard.
* **Data Filtering**: Only numbers within the range **[10, 20]** are saved to the file `askisii1.txt`.
* **Termination**: The process ends when the user enters `-1`.

### 2. Exercise 9.2 (lab9.2.c)
A file management utility that checks for file existence before writing.
* **Functionality**: Prompts the user for a filename.
* **Logic**: 
    * If the file **does not exist**, it creates it and writes "One".
    * If the file **already exists**, it asks for user confirmation (`y/n`) to overwrite it.

---

## How to Run
To compile and run the programs using `gcc`:
```bash
# For Lab 9.1
gcc LAB/lab9.1.c -o lab9.1
./lab9.1

# For Lab 9.2
gcc LAB/lab9.2.c -o lab9.2
./lab9.2
