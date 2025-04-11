// 1) Write a C program that calculates the maximum, the minimum, and the average of 10 numbers
// entered by the user and stored in an array.

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

// 2) Write a C program that reads 10 characters from the user, and then searches for the position of the
// character z.

#include <stdio.h>

int main()
{
    char s[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%c", s + i);
        if (*(s + i) == '\n')
        {
            *(s + i) = '\0';
            break;
        }
    }
    char *c = s;
    while (*c++ != '\0')
    {
        if (*c == 'z')
        {
            printf("the position of z is %d", c - s + 1);
            return 0;
        }
    }
    printf("z wasn't found");
}

// 3) Write a C function that checks if an array is in an ascending order.

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

// 4) Write a C program that reads 10 integer numbers from the user, and then the program should
// calculate the sum of the odd numbers, and the sum of the even numbers.

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