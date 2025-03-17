// #include <stdio.h>
#include <string.h>
// // 8) By using a two-dimensional array, write a C program to display a Pascal triangle of any size. In a
// // Pascal triangle, the first & second rows are set to 1. Each element of the triangle (starting from the
// // third row downwards) is the sum of the element directly above it and the element to the left of the
// // element directly above it. See the following example of a Pascal triangle (with a size = 5):
// // 1
// // 1 1
// // 1 2 1
// // 1 3 3 1
// // 1 4 6 4 1
// // 0 0 0 0 0 0
// // 0 1
// // 0 1 1
// // 0 1 2 1
// // 0 1 3 3 1
// // 0 1 4 6 4 1

// int main()
// {
//     int n;
//     printf("What size would you like the Pascal Triangle to have?\n");
//     scanf("%d", &n);
//     int nums[n + 1][n + 1];
//     memset(nums, 0, sizeof(nums));
//     nums[1][1] = 1;
//     // printf("%d\n", nums[3][3]);
//     printf("%d\t\n", nums[1][1]);
//     for (int i = 2; i < n + 1; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             nums[i][j] = nums[i - 1][j] + nums[i - 1][j - 1];
//             printf("%d\t", nums[i][j]);
//         }
//         printf("\n");
//     }
//     // for (int i = 0; i < n; i++)
//     // {
//     //     for (int j = 0; j <= i; j++)
//     //     {
//     //         if (i == j || !j)
//     //         {
//     //             nums[i][j] = 1;
//     //         }
//     //         else
//     //         {
//     //             nums[i][j] = nums[i - 1][j] + nums[i - 1][j - 1];
//     //         }
//     //         printf("%d\t", nums[i][j]);
//     //     }
//     //     printf("\n");
//     // }
// }
#include <stdio.h>
// 1
//

void pascalTriangle(int size)
{
    int row[size + 1]; // 1D array to store current row
    memset(row, 0, sizeof(row));
    row[0] = 1; // First row is always 1
    for (int i = 0; i < size; i++)
    {
        // Print row values
        for (int j = i; j >= 1; j--)
        {
            row[j] = row[j] + row[j - 1]; // Update row in-place
        }

        // Print the current row
        for (int j = 0; j <= i; j++)
            printf("%d ", row[j]);

        printf("\n");
    }

    // Print extra zero row
    for (int i = 0; i <= size; i++)
        printf("0 ");
    printf("\n");
}

int main()
{
    int size;
    printf("Enter the size of Pascal's Triangle: ");
    scanf("%d", &size);

    pascalTriangle(size);
    return 0;
}
