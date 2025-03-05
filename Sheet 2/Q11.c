#include <stdio.h>

// 11) Write a C function that checks if a matrix is sparse or not. Given that a sparse matrix is a matrix
// in which most of the elements are zero (that is, the number of zero-valued elements are more than
// 50% of the total number of elements).

int IsSparse(int rows, int cols, int nums[][cols])
{
    int count = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (!nums[i][j])
                count++;
        }
    }
    if (count > rows * cols / 2)
        return 1;
    else
        return 0;
}

int main()
{
    int rows, cols;
    printf("How many rows and columns would you like the matrix to have?\n");
    printf("Rows:   ");
    scanf("%d", &rows);
    printf("Columns:   ");
    scanf("%d", &cols);
    int nums[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        printf("Enter the numbers for Row %d:\n", i + 1);
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &nums[i][j]);
        }
    }
    if (IsSparse(rows, cols, nums))
    {
        printf("This Matrix is Sparse.");
    }
    else
    {
        printf("This Matrix is NOT Sparse.");
    }
}
