#include <stdio.h>

int main()
{
    int array[10] = {2, 5, 9, 0, 3, 7, 2};
    int *data_ptr;
    int value;
    data_ptr = &array[0];
    value = *data_ptr++;
    printf("%d\n", value);
    value = *++data_ptr;
    printf("%d\n", value);
    value = ++*data_ptr;
    printf("%d\n", value);
    value = *data_ptr;
    printf("%d\n", value);
}

// Output:

// 2
// 9
// 10
// 10

// Trace:

// 1. Initialization:
//    - data_ptr = &array[0]; → points to 2.

// 2. First assignment:
//    - value = *data_ptr++;
//      Uses the value at array[0] (2) then moves data_ptr to array[1].

// 3. Second assignment:
//    - value = *++data_ptr;
//      Increments data_ptr to point to array[2] (9) then dereferences it.

// 4. Third assignment:
//    - value = ++*data_ptr;
//      Increments the value at array[2] from 9 to 10, then assigns 10.

// 5. Fourth assignment:
//    - value = *data_ptr;
//      Reads the updated value at array[2] (10).
