// 5)  Write a C code to reverse a string by recursion.

#include <stdio.h>
#include <string.h>

void strr(char s1[], int i, int n)
{

    if (i == n)

        return;

    char tmp = s1[i];
    strr(s1, i + 1, n);
    s1[n - i - 1] = tmp;
}

int main()
{
    char s1[100];
    fgets(s1, sizeof s1, stdin);
    s1[strlen(s1) - 1] = 0;
    // *news1 = strr(s1, strlen(s1) - 1);
    strr(s1, 0, strlen(s1));
    printf("%s", s1);
}
