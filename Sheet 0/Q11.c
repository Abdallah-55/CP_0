#include <stdio.h>

// 11) Write a C program that prompts the user to choose an operation to do on 2 input integers. The
// operations are addition, subtraction, multiplication, and division. Note: the program should not allow
// the division by zero.

int main()
{
    int a, b, o;
    printf("This is a Basic Calculator:\n");
    printf("Enter your 2 numbers a, b respectively:\n");
    scanf("%d%d", &a, &b);
    printf("If you want to perform an operation, input the number associated to it.\n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division\n");
    scanf("%d", &o);
    if (o == 4 && b == 0)
    {
        printf("You're NOT allowed to divide by zero.");
        return 0;
    }
    switch (o)
    {
    case 1:
        printf("a + b = %d", a + b);
        break;
    case 2:
        printf("a - b = %d", a - b);
        break;
    case 3:
        printf("a * b = %d", a * b);
        break;
    case 4:
        printf("a / b = %f", (float)a / b);
        break;
    default:
        printf("This is not valid");
        break;
    }
}