// 7) What is the output of these codes?
// The Output : 16

#include <stdio.h>

int main()
{
    struct s
    {

        double x;
        int y;
    } a_struct;
    printf("The size of a_struct: %d-byte\n",
           sizeof(a_struct));
}