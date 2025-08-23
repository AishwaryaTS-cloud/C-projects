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

1. Open your terminal or command prompt.
2. Navigate to the project directory:
```bash
cd D:\Projects\C-Projects\Beginner\Utilities\Simple_Calculator
```

3. Compile the C program:
```bash
gcc code.c -o Simple_Calculator -lm
```
4. Run the program:
```bash
.\Simple_Calculator.exe
```
## Example Usage

```bash
Enter an operator (+, -, *, /, %, ^, s):
+
Enter two operands: 
10 
5
Result = 15.00
```
```bash
Enter an operator (+, -, *, /, %, ^, s): 
s
Enter a number: 
25
Result = 5.00
```

## Notes

i. For square root (s), only one operand is required.

ii. Make sure to link the math library (-lm) when compiling to use sqrt and pow.