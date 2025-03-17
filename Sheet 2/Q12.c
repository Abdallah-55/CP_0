#include <stdio.h>

// 12) Write a C function that reads a matrix and checks whether the given matrix is a symmetric
// matrix or not. Given that: If a square matrix A is equal to its transpose A^T, then it is a symmetric
// matrix. For example: if the elements of the matrix are:
// 1 2 3
// 2 4 5
// 3 5 8
// Then the matrix is symmetric

int IsSymmetric(int n, int nums[][n])
{
    for (int i = 1; i < n; i++)
    {
        printf("Enter the numbers for Row %d:\n", i + 1);
        for (int j = 0; j < i; j++)
        {
            scanf("%d", &nums[i][j]);
            if (nums[i][j] != nums[j][i])
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int n;
    printf("How many rows and columns would you like the square matrix to have?\n");
    scanf("%d", &n);
    int nums[n][n];
    if (IsSymmetric(n, nums))
    {
        printf("This Matrix is Symmetric.");
    }
    else
    {
        printf("This Matrix is NOT Symmetric.");
    }
}
