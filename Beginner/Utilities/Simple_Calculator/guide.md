# Simple Calculator in C

A simple command-line calculator written in C. Supports basic arithmetic and extended operations like modulus, power, and square root.

## Features

| Operator | Description                   |
|----------|-------------------------------|
| `+`      | Addition                       |
| `-`      | Subtraction                    |
| `*`      | Multiplication                 |
| `/`      | Division                       |
| `%`      | Modulus                        |
| `^`      | Power (first^second)           |
| `s`      | Square Root (single operand)   |

- Handles division by zero and invalid input.

## How to Compile & Run

All commands in one place:

```bash
# Navigate to the project directory
cd D:\Projects\C-Projects\Beginner\Utilities\Simple_Calculator

# Compile the C program (link math library)
gcc code.c -o Simple_Calculator -lm

# Run the program
.\Simple_Calculator.exe


## Example Usage

Enter an operator (+, -, *, /, %, ^, s): +  
Enter two operands: 10 5  
Result = 15.00  

Enter an operator (+, -, *, /, %, ^, s): s  
Enter a number: 25  
Result = 5.00  

## Notes

- For square root (`s`), only **one operand** is required.  
- Make sure to link the math library (`-lm`) when compiling to use `sqrt` and `pow`.
