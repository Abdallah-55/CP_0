#include <stdio.h>

int main()
{
    int arr[5], sum = 0;
    int *p = &sum;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", arr + i);
        *p += *(arr + i);
    }
    printf("%d", *p);
}