#include <stdio.h>

int len(char *s, int i)
{
    if (*(s + i) == '\0')
        return i;
    return len(s, i + 1);
}

int main()
{
    char *s;
    scanf("%s", s);
    printf("%d", len(s, 0));
}