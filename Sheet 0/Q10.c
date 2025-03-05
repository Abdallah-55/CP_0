#include <stdio.h>

// 10) Write a C program that finds the type of a triangle when its three angles are given.
// ● If all angles are equal, it is an equilateral triangle.
// ● If any two angles are equal, it is an isosceles triangle.
// ● If all angles are different, it is an acute triangle.

int main()
{
    int a, b, c;
    printf("Enter the 3 angles of your triangle:\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a == b && a == c)
    {
        printf("It is an equilateral triangle.");
    }
    else if (a == b || a == c || b == c)
    {
        printf("It is an isosceles triangle.");
    }
    else
    {
        printf("It is an acute triangle.");
    }
}