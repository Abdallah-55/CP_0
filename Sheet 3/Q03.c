// 3)  Write a C program that reads string S1 and certain letter from the user, then call your own
// function that return the number of occurrences of the given character in the given string.

#include <stdio.h>
#include <string.h>

int strcnt(char[], char);

int main()
{
    char s1[100];
    fgets(s1, sizeof(s1) + 1, stdin);
    s1[strlen(s1) - 1] = 0;
    char c;
    c = getchar();
    int count = strcnt(s1, c);
    printf("your character '%c' occured %d times.", c, count);
}
strcnt(char s1[], char c)
{
    int count = 0;
    for (int i = 0; i < strlen(s1); i++)
        if (s1[i] == c)
            count++;
    return count;
}