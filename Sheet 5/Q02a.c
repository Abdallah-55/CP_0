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
