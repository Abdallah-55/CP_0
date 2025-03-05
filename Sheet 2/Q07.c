#include <stdio.h>

// 7) By using a two-dimensional array, write a C program to display the matrix shown below:
//  0  1  1  1 1
// -1  0  1  1 1
// -1 -1  0  1 1
// -1 -1 -1  0 1
// -1 -1 -1 -1 0

int main()
{
    int n;
    printf("How many rows and columns would you like the square matrix to have?\n");
    scanf("%d", &n);
    int nums[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                printf("%2d\t", 0);
            }
            else if (i < j)
            {
                printf("%2d\t", 1);
            }
            else if (i > j)
            {
                printf("%2d\t", -1);
            }
        }
        printf("\n");
    }
}