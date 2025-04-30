#include <stdio.h>
int *max(int *p, int n)
{
    int *max = p;
    for (int i = 1; i < n; i++)
        max = (*(p + i) > *max) ? (p + i) : max;
    return max;
}

int main()
{
    int arr[8];
    int *mx;
    for (int i = 0; i < 8; i++)
        scanf("%d", arr + i);
    mx = max(arr, 8);
    printf("%d", *mx);
}