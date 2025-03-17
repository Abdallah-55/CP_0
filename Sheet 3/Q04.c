// 4)  Write a C function that take two strings (array of characters) and return one if the 1st is part of
// the 2nd and zero otherwise

#include <stdio.h>
#include <string.h>

int strin(char[], char[]);

int main()
{
    char s1[100], s2[100];
    fgets(s1, sizeof s1, stdin);
    s1[strlen(s1) - 1] = 0;
    fgets(s2, sizeof s2, stdin);
    s2[strlen(s2) - 1] = 0;
    printf("%d", strin(s1, s2));
}

int strin(char s1[], char s2[])
{
    int flag = 0;
    for (int i = 0; i < strlen(s2) - strlen(s1) + 1; i++)
        if (s1[0] == s2[i])
            for (int j = 0; s1[j] == s2[i + j] && s1[j]; j++)
                if (j == strlen(s1) - 1)
                    flag = 1;
    return flag;
}

// strin(char s1[], char s2[])
// {
//     int sum;
//     for (int i = 0; i < strlen(s2) - strlen(s1) + 1; i++)
//         if (s1[0] == s2[i])
//         {
//             sum = 0;
//             for (int j = 0; s1[j] == s2[i + j] && s1[j]; j++)
//                 sum++;
//             if (sum == strlen(s1))
//                 return 1;
//         }
//     return 0;
// }
