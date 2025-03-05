#include <stdio.h>

// 7) Write a program that determines a student’s grade. The program will read three scores and
// determine the grade based on the following rules:
// ● if the average score >= 90%
// ● if the average score >= 70% and < 90%
// ● if the average score >= 50% and < 70%
// ● if the average score < 50%
// => grade = A
// => grade = B
// => grade = C
// => grade = F

int main()
{
    float sub1, sub2, sub3, average;
    int grade;
    printf("Enter your 3 scores:\n");
    scanf("%f%f%f", &sub1, &sub2, &sub3);
    average = (sub1 + sub2 + sub3) / 3.0;
    grade = 71 - ((average >= 0) + (average >= 50) * 3 + (average >= 70) + (average >= 90));
    printf("your grade is %c", grade);
}