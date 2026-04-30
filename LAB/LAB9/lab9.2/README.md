\# Lab Exercise - File Existence and Overwrite Handling in C



\## Description

This program demonstrates how to check for file existence and handle file creation or overwriting in C.



The user is prompted to enter a filename. The program then checks whether the file already exists:



\- If the file does not exist, it is created and the word "One" is written to it.

\- If the file exists, the user is asked whether they want to overwrite it.

&#x20; - If the user chooses 'y', the file is overwritten and "One" is written.

&#x20; - If the user chooses 'n', the program asks for a new filename.



The process repeats until a valid action is completed.



\## Key Concepts Used

\- File handling (`fopen`, `fclose`)

\- File existence checking

\- Writing to files using `fprintf`

\- User input handling with `scanf`

\- Conditional statements (`if-else`)

\- Infinite loop with `while(1)` and `break`



\## Output

\- A text file containing the word "One"

\- Either newly created or overwritten based on user choice

