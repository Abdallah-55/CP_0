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

// 2) Trace the following:

// A

#include <stdio.h>

int main(void)
{
    char ch = 'c';
    char *chptr = &ch;
    int i = 20;
    int *intptr = &i;
    float f = 1.20000;
    float *fptr = &f;
    char *ptr = "I am a string";
    printf("\n [%c], [%d], [%f], [%c], [%s]\n",
           *chptr, *intptr, *fptr, *ptr, ptr);
    return 0;
}

// Output:

// [c], [20], [1.200000], [I], [I am a string]

// Trace Explanation:

// 1. char ch = 'c'; & char *chptr = &ch;
//    - *chptr gives 'c' → printed by %c.

// 2. int i = 20; & int *intptr = &i;
//    - *intptr gives 20 → printed by %d.

// 3. float f = 1.20000; & float *fptr = &f;
//    - *fptr gives 1.200000 (default float printing) → printed by %f.

// 4. char *ptr = "I am a string";
//    - *ptr gives the first character 'I' → printed by %c.
//    - ptr gives the full string "I am a string" → printed by %s.

// ــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــــ

// B

#include <stdio.h>

int main()
{
    int array[10] = {2, 5, 9, 0, 3, 7, 2};
    int *data_ptr;
    int value;
    data_ptr = &array[0];
    value = *data_ptr++;
    printf("%d\n", value);
    value = *++data_ptr;
    printf("%d\n", value);
    value = ++*data_ptr;
    printf("%d\n", value);
    value = *data_ptr;
    printf("%d\n", value);
}

// Output:

// 2
// 9
// 10
// 10

// Trace:

// 1. Initialization:
//    - data_ptr = &array[0]; → points to 2.

// 2. First assignment:
//    - value = *data_ptr++;
//      Uses the value at array[0] (2) then moves data_ptr to array[1].

// 3. Second assignment:
//    - value = *++data_ptr;
//      Increments data_ptr to point to array[2] (9) then dereferences it.

// 4. Third assignment:
//    - value = ++*data_ptr;
//      Increments the value at array[2] from 9 to 10, then assigns 10.

// 5. Fourth assignment:
//    - value = *data_ptr;
//      Reads the updated value at array[2] (10).
