#include <stdio.h>

// 6) Write a C program that prompts the user to input three integer values and find the greatest value
// of those three values.

int main()
{
    int a, b, c, max;
    printf("Enter your 3 numbers:\n");
    scanf("%d%d%d", &a, &b, &c);
    max = (a >= b) ? ((a >= c) ? a : c) : ((b >= c) ? b : c);
    printf("%d", max);
}