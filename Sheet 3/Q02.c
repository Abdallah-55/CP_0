// 2)  Write a C program that reads 10 characters from the user, and then searches for the position of
// the character z.

#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    fgets(s, sizeof(s) + 1, stdin);
    // char c = 'z';
    // c = getchar();
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'z')
        {
            printf("the character 'z' has the position %d", i + 1);
            return;
        }
    }
    printf("the character 'z' was not found.");
}

// -------------------------------------
// 2)  Write a C program that reads 10 characters from the user, and then searches for the position of
// the character z.

#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    gets(s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'z')
        {
            printf("the position : %d", i + 1);
            return;
        }
    }
    printf("Not Found");
}