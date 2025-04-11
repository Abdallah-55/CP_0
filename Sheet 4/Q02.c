#include <stdio.h>

int main()
{
    char s[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%c", s + i);
        if (*(s + i) == '\n')
        {
            *(s + i) = '\0';
            break;
        }
    }
    char *c = s;
    while (*c++ != '\0')
    {
        if (*c == 'z')
        {
            printf("the position of z is %d", c - s + 1);
            return 0;
        }
    }
    printf("z wasn't found");
}