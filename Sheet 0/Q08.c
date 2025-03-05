#include <stdio.h>

// 8) Write a C program that finds whether a number is even or odd.

int main()
{
    int a;
    printf("Enter your number:\n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("your number is even");
    }
    else
    {
        printf("your number is odd");
    }
}
