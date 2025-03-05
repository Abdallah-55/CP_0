#include <stdio.h>

// 6) Write a C program to read a matrix from the user, and then display the row with the maximum
// total/sum (that is, the row whose sum of elements is maximum).

int main()
{
    int rows, cols, sum = 0, maxtotal, maxrow;
    printf("How many rows and columns would you like the matrix to have?\n");
    printf("Rows:\t");
    scanf("%d", &rows);
    printf("Columns:\t");
    scanf("%d", &cols);
    int nums[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        sum = 0;
        printf("Enter the numbers for Row %d:\n", i + 1);
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &nums[i][j]);
            sum += nums[i][j];
        }
        if (i)
        {
            maxtotal = (sum > maxtotal) ? sum : maxtotal;
        }
        else
        {
            maxtotal = sum;
        }
    }
    for (int i = 0; i < rows; i++)
    {
        sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum += nums[i][j];
        }
        if (maxtotal == sum)
        {
            printf("\nRow %d has a maximum sum of elements of %d\nIts elements are:\t", i + 1, maxtotal);
            for (int j = 0; j < cols; j++)
            {
                printf("%d  ", nums[i][j]);
            }
        }
    }
}
