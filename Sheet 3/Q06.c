// 6) Write a function ``replace'' which takes a string as a parameter and replaces all spaces in that
// string by minus signs and delivers the number of spaces it replaced.

#include <stdio.h>
#include <string.h>

int replace(char[]);

int main()
{
    char s1[100];
    fgets(s1, sizeof s1, stdin);
    s1[strlen(s1) - 1] = 0;
    printf("your string : %s\nthe number of spaces : %d", s1, replace(s1));
}

int replace(char s1[])
{
    int count = 0;
    for (int i = 0; i < strlen(s1); i++)
        if (s1[i] == ' ')
        {
            s1[i] = '-';
            count++;
        }
    return count;
}
