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
