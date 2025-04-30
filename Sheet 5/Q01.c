// 1) Write a C program that asks the user to enter 10 integers in an array. The program will then
// display (based on the entered numbers) one of the following messages:
//     ● "the numbers in the array are increasing",
//     ● "the numbers in the array are decreasing",
//     ● "the numbers in the array are not changing", or
//     ● "the numbers in the array are increasing and then decreasing."

#include <stdio.h>

// if nxt < prv → inc = 0 → incdec
// if nxt != prv → same = 0
// if nxt > prv → dec = 0
// if i == 1 && inc == 1 && !same → incinc = 1
// if incinc = 1 && inc = 0 → incdec = 1
// if incdec = 1 : if nxt > prv → incdecdec = 0

int main()
{
    int same = 1, inc = 1, dec = 1, incinc = 0, incdec = 0, incdecdec = 1;
    int arr[10];
    scanf("%d", arr);
    for (int i = 1; i < 10; i++)
    {
        scanf("%d", arr + i);
        if (*(arr + i) > *(arr + i - 1))
        {
            same = 0;
            dec = 0;
        }
        if (*(arr + i) < *(arr + i - 1))
        {
            same = 0;
            inc = 0;
        }
        if (inc && !same)
            incinc = 1;
        if (incinc && !inc)
            incdec = 1;
        if (incdec && *(arr + i) > *(arr + i - 1))
            incdecdec = 0;
    }
    if (same)
        printf("the numbers in the array are not changing\n");
    else if (dec)
        printf("the numbers in the array are decreasing\n");
    else if (inc)
        printf("the numbers in the array are increasing\n");
    else if (incdec && incdecdec)
        printf("the numbers in the array are increasing and then decreasing\n");
    else
        printf("There is no pattern\n");
}