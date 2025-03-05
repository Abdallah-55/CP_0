#include <stdio.h>

// 13) Write a C program that will print the following pattern:
// *
// ***
// *****
// *******
// *********
// *********
// *******
// *****
// ***
// *

int main()
{
    int n;
    printf("Enter the number of rows you want:\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i * 2 - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n; i > 0; i--)
    {
        for (int j = i * 2 - 1; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}