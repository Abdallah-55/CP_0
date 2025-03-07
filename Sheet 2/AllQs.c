#include <stdio.h>
// 1) Write a C program that calculates the maximum, the minimum, and the average of 10 numbers
// entered by the user and stored in an array.
int main()
{
    int n, max, min, sum = 0;
    printf("How many numbers would you like to enter?\n");
    scanf("%d", &n);
    int nums[n];
    scanf("%d", &nums[0]);
    max = nums[0];
    min = nums[0];
    sum += nums[0];
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &nums[i]);
        if (max < nums[i])
        {
            max = nums[i];
        }
        if (min > nums[i])
        {
            min = nums[i];
        }
        sum += nums[i];
    }
    printf("For the numbers you entered:\n\tThe Average is %.2f\n\tThe Minimum is %d\n\tThe Maximum is %d", (float)sum / n, min, max);
}



#include <stdio.h>
// 2) Write a C function that checks if an array is in an ascending order.
int main()
{
    int n, is_ascending = 1;
    printf("How many numbers would you like to enter?\n");
    scanf("%d", &n);
    int nums[n];
    scanf("%d", &nums[0]);
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &nums[i]);
        if (nums[i] < nums[i - 1])
        {
            is_ascending = 0;
        }
    }
    if (is_ascending)
    {
        printf("The Array is in an Ascending order.");
    }
    else
    {
        printf("The Array is NOT in an Ascending order.");
    }
}



#include <stdio.h>
// 3) Write a C program that reads 10 integer numbers from the user, and then the program should
// calculate the sum of the odd numbers, and the sum of the even numbers.

int main()
{
    int n, evensum = 0, oddsum = 0;
    printf("How many numbers would you like to enter?\n");
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        if (nums[i] % 2 == 0)
        {
            evensum += nums[i];
        }
        else
        {
            oddsum += nums[i];
        }
    }
    printf("The sum of the Odd numbers is %d\nThe sum of the Even numbers is %d", oddsum, evensum);
}



#include <stdio.h>
// 4) Write a C program that asks the user to enter 10 integers in an array. The program will then
// display (based on the entered numbers) one of the following messages:
// ● "the numbers in the array are increasing",
// ● "the numbers in the array are decreasing",
// ● "the numbers in the array are not changing", or
// ● "the numbers in the array are increasing and then decreasing."

int main()
{
    int n;
    int same = 1, inc = 1, dec = 1, incinc = 0, incdec = 0, incdecdec = 1;
    printf("How many numbers would you like to enter?\n");
    scanf("%d", &n);
    int nums[n];
    // if nxt < prv → inc = 0 → incdec
    // if nxt != prv → same = 0
    // if nxt > prv → dec = 0
    // if i == 1 && inc == 1 && !same → incinc = 1
    // if incinc = 1 && inc = 0 → incdec = 1
    // if incdec = 1 : if nxt > prv → incdecdec = 0
    scanf("%d", &nums[0]);
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &nums[i]);
        if (nums[i] != nums[i - 1])
        {
            same = 0;
        }
        if (nums[i] > nums[i - 1])
        {
            dec = 0;
        }
        if (nums[i] < nums[i - 1])
        {
            inc = 0;
        }
        if (i == 1 && inc && !same)
        {
            incinc = 1;
        }
        if (incinc && !inc)
        {
            incdec = 1;
        }
        if (incdec)
        {
            if (nums[i] > nums[i - 1])
            {
                incdecdec = 0;
            }
        }
    }
    if (same)
    {
        printf("the numbers in the array are not changing\n");
    }
    else if (dec)
    {
        printf("the numbers in the array are decreasing\n");
    }
    else if (inc)
    {
        printf("the numbers in the array are increasing\n");
    }
    else if (incdec && incdecdec)
    {
        printf("the numbers in the array are increasing and then decreasing\n");
    }
    else
    {
        printf("There is no pattern\n");
    }
}



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



#include <stdio.h>

// 9) Write a C function that reverses an array in another one.
int reverse(int nums[], int revnums[], int n)
{
    for (int i = 0; i < n; i++)
    {
        revnums[n - 1 - i] = nums[i];
    }
}

int main()
{
    int n;
    printf("How many numbers would you like to enter in the array?\n");
    scanf("%d", &n);
    int nums[n], revnums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    reverse(nums, revnums, n);
    printf("\nThe Original Array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", nums[i]);
    }
    printf("\nThe Reversed Array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", revnums[i]);
    }
}



#include <stdio.h>

// 10) Write a C function that reads the number of students in a class, and five grades for each student.
// The function should then compute the average grade for each student.

int AvgGrade(int cols, float students[][cols + 1], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        students[i][cols] = 0;
        printf("\nEnter the grades for Student %d:\n", i + 1);
        for (int j = 0; j < cols; j++)
        {
            scanf("%f", &students[i][j]);
            students[i][cols] += (float)students[i][j] / cols;
        }
    }
}

int main()
{
    int rows, cols;
    printf("How many students in the class?\t");
    scanf("%d", &rows);
    printf("How many subjects did students have?\t");
    scanf("%d", &cols);
    float students[rows][cols + 1];
    AvgGrade(cols, students, rows);
    for (int i = 0; i < rows; i++)
    {
        printf("\nThe Average grade for Student %d is   %.2f", i + 1, students[i][cols]);
    }
}



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
    int symmetric = 1;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the numbers for Row %d:\n", i + 1);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &nums[i][j]);
            if (i > j)
            {
                if (nums[i][j] != nums[j][i])
                {
                    symmetric = 0;
                    return 0;
                }
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



#include <stdio.h>

// 13) Write a C program that reads the radius of a circle, and then calls a function that returns the
// circumference and the area of that circle. The program should include a global constant variable.

const float pi = 3.14;
void circle(float r, float *area, float *crcmfr)
{
    *crcmfr = 2 * pi * r;
    *area = pi * r * r;
}

int main()
{
    float r, area, crcmfr;
    printf("The Radius of the Circle is:    \n");
    scanf("%f", &r);
    circle(r, &area, &crcmfr);
    printf("The Circumference =  %.2f\n", crcmfr);
    printf("The Area =  %.2f\n", area);
}



#include <stdio.h>

// 14) Write a C program that reads a 1-D array of any size, then calls a function that returns the
// following:
// ● The maximum value in the array.
// ● The minimum value in the array.
// ● The average value of the array.

int calc(int nums[], int n, int *max, int *min, float *avg)
{
    for (int i = 0; i < n; i++)
    {
        if (i)
        {
            *max = (nums[i] > *max) ? nums[i] : *max;
            *min = (nums[i] < *min) ? nums[i] : *min;
        }
        else
        {
            *max = nums[i];
            *min = nums[i];
        }
        *avg += (float)nums[i] / n;
    }
}

int main()
{
    int n, max, min;
    float avg = 0;
    printf("How many numbers would you like to enter?\n");
    scanf("%d", &n);
    int nums[n];
    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    calc(nums, n, &max, &min, &avg);
    printf("For the numbers you entered:\n");
    printf("    The Maximum value is  %d\n", max);
    printf("    The Minimum value is  %d\n", min);
    printf("    The Average value is  %.2f\n", avg);
}

