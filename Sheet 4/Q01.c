#include <stdio.h>

int main()
{
    int arr[10];
    int *max = arr, *min = arr;
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", arr + i);
        max = (*(arr + i) > *max) ? (arr + i) : max;
        min = (*(arr + i) < *min) ? (arr + i) : min;
        sum += *(arr + i);
    }
    printf("The Max: %d\nThe Min: %d\nThe Average: %.2f", *max, *min, sum / 10.0);
}