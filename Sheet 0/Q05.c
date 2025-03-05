#include <stdio.h>

// 5) Write a C program that finds the area of a triangle. Note: a triangle’s area = 0.5 * base * height

int main()
{
    int base, height;
    float area;
    printf("Enter the base of the triangle:\n");
    scanf("%d", &base);
    printf("Enter the height of the triangle:\n");
    scanf("%d", &height);
    area = (float)0.5 * base * height;
    printf("The area of the triangle is %f", area);
}