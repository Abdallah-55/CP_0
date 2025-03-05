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