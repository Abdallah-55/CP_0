#include <stdio.h>

int digts(char *s, int i)
{
    if (*(s + i) == '\0')
        return 1;
    if (*(s + i) < '0' || *(s + i) > '9')
        return 0;
    return digts(s, i + 1);
}

int main()
{
    char *s;
    scanf("%s", s);
    if (digts(s, 0))
        printf("%s", "yes");
    else
        printf("%s", "no");
}