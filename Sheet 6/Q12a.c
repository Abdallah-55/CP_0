#include <stdio.h>

void swap_nums(int *x, int *y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

void swap_pointers(char *x, char *y)
{
    char *tmp;
    tmp = x;
    x = y;
    y = tmp;
}

int main()
{
    int a, b;
    char *s1, *s2;
    a = 3;
    b = 4;
    swap_nums(&a, &b);
    printf("a is %d\n", a);
    printf("b is %d\n", b);
    s1 = "I should print second";
    s2 = "I should print first";
    swap_pointers(s1, s2);
    printf("s1 is %s\n", s1);
    printf("s2 is %s\n", s2);
    return 0;
}

// Output:

// a is 4
// b is 3
// s1 is I should print second
// s2 is I should print first

// Trace:

// The function "swap_nums" swaps the values of a and b using pointers.
// After calling swap_nums(&a, &b), a becomes 4, and b becomes 3.
// The function "swap_pointers" attempts to swap two char* pointers, but:
// It only swaps the local copies of the pointers x and y.
// The original pointers s1 and s2 in main remain unchanged.
