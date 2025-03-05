#include <stdio.h>

// 3) Write a C program to prompt the user (i.e. ask the user) to input 3 integer values and print these
// values in the reversed order.

int main()
{
    int a, b, c;
    printf("Enter 3 numbers:\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("Here is your numbers in reversed order:\n%d %d %d", c, b, a);
}