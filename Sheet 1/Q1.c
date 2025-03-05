#include <stdio.h>

// 1) Repeat the problem no. 11 in Sheet#0 but with an ‘Exit’ option; that is, the program allows the
// user to enter new values and choose the required operations until the user chooses to exit.

// 11) Write a C program that prompts the user to choose an operation to do on 2 input integers. The
// operations are addition, subtraction, multiplication, and division. Note: the program should not allow
// the division by zero.

int main()
{
    int a, b, o;
    printf("This is a Basic Calculator:\n");
    while (1)
    {
        printf("\nIf you want to perform an operation, input the number associated to it.\n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division\n 0. Exit\n");
        scanf("%d", &o);
        if (o == 0)
        {
            printf("You Exitted the program.\n");
            return 0;
        }
        printf("Enter your 2 numbers a, b respectively:\n");
        scanf("%d%d", &a, &b);
        if (o == 4 && b == 0)
        {
            printf("You're NOT allowed to divide by zero.\n");
            return 0;
        }
        switch (o)
        {
        case 1:
            printf("a + b = %d\n", a + b);
            break;
        case 2:
            printf("a - b = %d\n", a - b);
            break;
        case 3:
            printf("a * b = %d\n", a * b);
            break;
        case 4:
            printf("a / b = %.2f\n", (float)a / b);
            break;
        default:
            printf("This is not valid");
            break;
        }
    }
}