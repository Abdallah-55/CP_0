#include <stdio.h>
void calc(int *d, int *f, float *r)
{
    *r = (float)*f / *d;
}

int main()
{
    int d, f;
    float r;
    scanf("%d %d", &d, &f);
    calc(&d, &f, &r);
    printf("%f", r);
}