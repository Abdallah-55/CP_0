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