#include <stdio.h>

int main()
{
    int arr[10];
    int sumodd = 0, sumeven = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", arr + i);
        sumodd += (*(arr + i) % 2) * *(arr + i);
        sumeven += !(*(arr + i) % 2) * *(arr + i);
    }
    printf("The Sum of Even numbers: %d\nThe Sum of Odd numbers: %d", sumeven, sumodd);
}