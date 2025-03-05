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