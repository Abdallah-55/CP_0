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
