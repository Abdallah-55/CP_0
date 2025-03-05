#include <stdio.h>

// 15) Write a C code that finds the sum of the digits of a number.

int main()
{
    int n, x, sum = 0;
    printf("Enter your number:\n");
    scanf("%d", &n);
    x = n;
    while (x)
    {
        sum += x % 10;
        x /= 10;
    }
    printf("the sume of the digits of your number %d is: %d", n, sum);
}
