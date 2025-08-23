#include <stdio.h>
#include <math.h> // for sqrt() and pow()

int main()
{
    char op;
    double a, b, res;

    printf("Enter an operator (+, -, *, /, %%, ^, s):\n");
    printf("  + for Addition\n");
    printf("  - for Subtraction\n");
    printf("  * for Multiplication\n");
    printf("  / for Division\n");
    printf("  %% for Modulus (integers only)\n");
    printf("  ^ for Power (a^b)\n");
    printf("  s for Square Root (first operand only)\n");
    scanf(" %c", &op);

    if (op == 's')
    {
        // Only one input needed
        printf("Enter a number: \n");
        scanf("%lf", &a);
        if (a >= 0)
            printf("Result = %.2lf\n", sqrt(a));
        else
            printf("Error! Square root of negative number not allowed\n");
    }
    else
    {
        // Two operands needed
        printf("Enter two operands:\n");
        scanf("%lf %lf", &a, &b);

        switch (op)
        {
        case '+':
            res = a + b;
            break;
        case '-':
            res = a - b;
            break;
        case '*':
            res = a * b;
            break;
        case '/':
            if (b != 0)
                res = a / b;
            else
            {
                printf("Error! Division by zero\n");
                return 1;
            }
            break;
        case '%':
            if ((int)b != 0)
                res = (int)a % (int)b;
            else
            {
                printf("Error! Modulus by zero\n");
                return 1;
            }
            break;
        case '^':
            res = pow(a, b);
            break;
        default:
            printf("Error! Invalid operator\n");
            return 1;
        }
        printf("Result = %.2lf\n", res);
    }

    return 0;
}
