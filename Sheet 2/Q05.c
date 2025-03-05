#include <stdio.h>

// 5) Write a C program that reads a matrix (3🞨4), and asks the user to choose a number, and then
// displays the position of the selected number if found, otherwise it displays “number not found.”

int main()
{
    int rows, cols;
    int num, found = 0;
    printf("How many rows and columns would you like the matrix to have?\n");
    printf("Rows:\t");
    scanf("%d", &rows);
    printf("Columns:\t");
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
    printf("Enter a number to search for its position:\t");
    scanf("%d", &num);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (num == nums[i][j])
            {
                printf("Your number is at Row %d and Column %d\n", i + 1, j + 1);
                found = 1;
            }
        }
    }
    if (!found)
    {
        printf("Number NOT Found");
    }
}