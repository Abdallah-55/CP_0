#include <stdio.h>

// 8) By using a two-dimensional array, write a C program to display a Pascal triangle of any size. In a
// Pascal triangle, the first & second rows are set to 1. Each element of the triangle (starting from the
// third row downwards) is the sum of the element directly above it and the element to the left of the
// element directly above it. See the following example of a Pascal triangle (with a size = 5):
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

int main()
{
    int n;
    printf("What size would you like the Pascal Triangle to have?\n");
    scanf("%d", &n);
    int nums[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i == j || !j)
            {
                nums[i][j] = 1;
            }
            else
            {
                nums[i][j] = nums[i - 1][j] + nums[i - 1][j - 1];
            }
            printf("%d\t", nums[i][j]);
        }
        printf("\n");
    }
}