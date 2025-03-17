// 1) Write a C function that concatenates two input strings S1 and S2 in string S1.

#include <stdio.h>
#include <string.h>
void concat(char[], char[]);

int main()
{
    char s1[100];
    fgets(s1, sizeof(s1) + 1, stdin);
    s1[strlen(s1) - 1] = 0;
    char s2[100];
    fgets(s2, sizeof(s2) + 1, stdin);
    s2[strlen(s2) - 1] = 0;
    concat(s1, s2);
    printf("s1 : %s\ns2 : %s", s1, s2);
}

void concat(char s1[], char s2[])
{
    int l = strlen(s1);
    for (int i = 0; i <= strlen(s2); i++)

        s1[l + i] = s2[i];
}
