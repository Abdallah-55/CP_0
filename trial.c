#include <stdio.h>
// void calc(int d, int f, float *r)
// {
//     *r = (float)(f / d);
// }

int main()
{
    int d, f;
    float r;
    scanf("%d %d", &d, &f);
    r = (float)(f / d);
    // calc(d, f, &r);
    printf("%f", r);
}

// #include <stdio.h>
// #include <string.h>
// union Data
// {
//     int i;
//     float f;
//     char str[20];
// };
// int main()
// {
//     union Data data;
//     data.i = 10;
//     data.f = 20.5;
//     strcpy(data.str, "C Prog");
//     printf("data.i : %d\n", data.i);
//     printf("data.f : %f\n", data.f);
//     printf("data.str : %s\n", data.str);
// }

// struct employee
// {
//     int id;
//     char name[10];
//     float salary;
// };

// int b = 7;
// int main()
// {
// int arr[10];
// int *p1 = &arr[1], *p2 = &arr[3];
// int x = p2 - p1;
// printf("%d\n", x);
// printf("%p\n", p1);
// printf("%p\n", p2);

// -------------------

// char a1[2][3][3] = {'g', 'e', 'e', 'k', 's', 'q', 'u', 'i', 'z', 'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r'};
// int a2[3][3] = {'g', 'e', 'e', 'k', 's', 'q', 'u', 'i'};
// int *p = (int *)a2; // &a2[0][0]
// printf("%c\n", *(*(a2 + 1)));
// printf("%d\n", sizeof(a2[0]));
// printf("%d\n", sizeof(*p));
// int a = 5;
// int *b = &a;
// long long c = (long long)b;
// printf("%li\n", b);
// printf("%li\n", c);

// a2 == &a2[1]
// *a2 == *(&a2[0]) == a2[0] == &a2[0][0]
// **a2 == *(&a2[0][0]) == a2[0][0]
// char *s = "why";
// printf("%s\n", **a1);

// -------------------

// printf("%s\n", a);
// int arr[2][3] = {1, 2, 3, 4, 5};
// printf("%d\n", arr[0][4]);
// printf("%d\n", arr[1][2]);

// -------------------
// int x = 10;
// int b = 6;
// {
//     int b = 5;
// }

// int *a = &x;
// printf("%d\n", sizeof(struct employee));
// printf("%d\n", sizeof(x));
// printf("%d\n", sizeof(&x));
// printf("%d\n", sizeof(*a));
// printf("%d\n", sizeof(a));
// printf("%d\n", sizeof(&a));
// printf("%d\n", b);
// }
