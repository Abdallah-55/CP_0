#include <stdio.h>

// 4) Given the following pseudo code, write a program that executes it.
// a.    read x
// b.    read y
// c.    compute p = x y
// d.    compute s = x + y
// e.    total = s2 + p ( s – x ) ( p + y )
// f.
// print total

int main()
{
    int x, y, p, s, total;
    printf("Enter 2 numbers:\n");
    scanf("%d%d", &x, &y);
    p = x * y;
    s = x + y;
    total = s * s + p * (s - x) * (p + y);
    printf("%d", total);
}