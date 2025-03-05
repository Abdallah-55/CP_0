#include <stdio.h>

// 13) Write a C program that reads the radius of a circle, and then calls a function that returns the
// circumference and the area of that circle. The program should include a global constant variable.

const float pi = 3.14;
void circle(float r, float *area, float *crcmfr)
{
    *crcmfr = 2 * pi * r;
    *area = pi * r * r;
}

int main()
{
    float r, area, crcmfr;
    printf("The Radius of the Circle is:    \n");
    scanf("%f", &r);
    circle(r, &area, &crcmfr);
    printf("The Circumference =  %.2f\n", crcmfr);
    printf("The Area =  %.2f\n", area);
}
