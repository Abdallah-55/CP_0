#include <stdio.h>

// 9) Write a C program that compares two numbers a and b. The output of this comparison is whether
// the two numbers are equal, that a is greater, or that b is greater.

int main()
{
    int a, b;
    printf("Enter your 2 numbers a, b respectively:\n");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        printf("a is greater");
    }
    else if (a < b)
    {
        printf("b is greater");
    }
    else if (a == b)
    {
        printf("a & b are equal");
    }
}
