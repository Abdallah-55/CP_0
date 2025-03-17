// 7) What is the output of these codes?

// a)
// The Output : 0 2 1

#include <stdio.h>
int main()
{
    enum status
    {
        pass,
        fail,
        absent
    };
    enum status stud1, stud2, stud3;
    stud1 = pass;
    stud2 = absent;
    stud3 = fail;
    printf("%d %d %d\n", stud1, stud2, stud3);
    return 0;
}

// b)
// The Output : -1, 0, 6, 7, 8, 9

#include <stdio.h>
int main()
{
    enum days
    {
        MON = -1,
        TUE,
        WED = 6,
        THU,
        FRI,
        SAT
    };
    printf("%d, %d, %d, %d, %d, %d\n", MON, TUE, WED, THU,
           FRI, SAT);
    return 0;
}