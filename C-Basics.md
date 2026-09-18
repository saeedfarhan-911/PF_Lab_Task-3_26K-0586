# C Programming Basics Guide

### 1. Data Types

| Data Type | Description | Size |
| :--- | :--- | :--- |
| int | Stores standard whole numbers with no decimal points | 4 bytes |
| float | Stores regular fractional numbers with decimal points | 4 bytes |
| double | Stores large fractional decimals with double precision | 8 bytes |
| char | Stores a single symbol, character, or letter | 1 byte |
| bool | Stores true or false states (stored as 1 or 0) | 1 byte |
| void | Represents an empty state or absence of any value | 0 bytes |

### 2. Format Specifiers
Format Specifier    Description
------------------  -------------------------------------------------------------
%d                  Standard signed base-10 integers
%u                  Unsigned positive base-10 integers
%o                  Base-8 octal numbers
%x                  Base-16 hexadecimal numbers (lowercase letters)
%X                  Base-16 hexadecimal numbers (uppercase letters)
%f                  Regular floating point decimal values
%e                  Scientific exponent notation formatting
%c                  A single text character or keyboard symbol
%s                  Plain text strings
%ld                 Extended signed long integers

### 3. Input and Output Functions
* scanf() : This function reads formatted inputs from the user's keyboard buffer.
* printf() : This function prints formatted text messages out to the console terminal screen.
* getchar() : This function grabs exactly one single text character symbol from the input stream.
* putchar() : This function prints exactly one single text character symbol out onto the display.
* fgets() : This function reads an entire line of text string data safely while including spaces.
* puts() : This function prints out a full string onto a screen line and automatically inserts a newline at the end.

### 4. Escape Sequences
Escape sequences are special pairs of characters that change how text prints inside our console. Here are five basic examples:

* \n - Moves the text cursor directly down to a brand new line.
* \t - Creates a flat tab indentation space across the line.
* \\ - Lets you print out a visible backslash symbol without syntax issues.
* \" - Lets you print out literal double quotation marks inside a message.
* \b - Moves the cursor back by a single space like a backspace.

### 5. Floating Precision Control
We control the decimal position layout of floating point values by adding a period followed by a number inside our format specifiers. For example, typing %.2f tells the system to cut down and display the value restricted to exactly 2 digits after the decimal point.
