#include <stdio.h>

// 12) Write a C program that will print the following pattern:
// *******
// ******
// *****
// ****
// ***
// **
// *

int main()
{
    int n;
    printf("Enter the number of rows you want:\n");
    scanf("%d", &n);
    for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}