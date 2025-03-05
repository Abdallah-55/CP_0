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
