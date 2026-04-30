\# Lab Exercise - File Handling in C



\## Description

This program demonstrates basic file handling in C. It allows the user to repeatedly enter integer values and stores only those numbers that fall within a specific range (10 to 20) into a text file.



The program works in two phases:



1\. \*\*Writing phase:\*\*

&#x20;  - The user is prompted to enter numbers one by one.

&#x20;  - Input continues until the user enters `-1`.

&#x20;  - Only numbers between 10 and 20 (inclusive) are written to a file named `askisi1.txt`.



2\. \*\*Reading phase:\*\*

&#x20;  - After writing, the program reopens the file in read mode.

&#x20;  - It reads all stored values and displays them on the screen.



\## Key Concepts Used

\- File opening and closing (`fopen`, `fclose`)

\- Writing to files using `fprintf`

\- Reading from files using `fscanf`

\- Input validation with conditions

\- Loop control with `while(1)` and `break`



\## File Output

\- `askisi1.txt` contains only numbers in the range 10–20 entered by the user.

