#include <stdio.h>

// 14) Write a C program that finds the sum of the first n natural numbers.

int main()
{
    int n, sum = 0;
    printf("Enter your number:\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("the sum of the first %d natural numbers is: %d", n, sum);
}