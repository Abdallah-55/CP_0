#include <stdio.h>

int IsAsc(int *arr)
{
    for (int i = 1; i < 10; i++)
        if (*(arr + i) < *(arr + i - 1))
            return 0;
    return 1;
}

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
        scanf("%d", arr + i);
    if (IsAsc(arr))
        printf("Ascending");
    else
        printf("Not Ascending");
    return 0;
}