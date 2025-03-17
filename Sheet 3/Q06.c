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

// -----------------------------------
#include <stdio.h>
#include <string.h>

int replace(char[]);

int main()
{
    char s1[100];
    gets(s1);
    printf("There are %d spaces", replace(s1));
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