#include <stdio.h>

int spcs(char *s, int i, int c)
{
    if (*(s + i) == '\0')
        return c;
    if (*(s + i) == ' ')
        return spcs(s, i + 1, c + 1);
    return spcs(s, i + 1, c);
}

int main()
{
    char *s;
    gets(s);
    printf("%d", spcs(s, 0, 0));
}