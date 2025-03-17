// 1) Write a C function that concatenates two input strings S1 and S2 in string S1.

#include <stdio.h>
#include <string.h>
void concat(char[], char[]);

int main()
{
    char s1[100];
    fgets(s1, sizeof(s1) + 1, stdin);
    s1[strlen(s1) - 1] = 0;
    char s2[100];
    fgets(s2, sizeof(s2) + 1, stdin);
    s2[strlen(s2) - 1] = 0;
    concat(s1, s2);
    printf("s1 : %s\ns2 : %s", s1, s2);
}

void concat(char s1[], char s2[])
{
    int l = strlen(s1);
    for (int i = 0; i <= strlen(s2); i++)

        s1[l + i] = s2[i];
}

// 2)  Write a C program that reads 10 characters from the user, and then searches for the position of
// the character z.

#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    fgets(s, sizeof(s) + 1, stdin);
    s[strlen(s) - 1] = 0;
    for (int i = 0; i < strlen(s); i++)
        if (s[i] == 'z')
        {
            printf("the character 'z' has the position %d", i + 1);
            return;
        }
    printf("the character 'z' was not found.");
}

// 3)  Write a C program that reads string S1 and certain letter from the user, then call your own
// function that return the number of occurrences of the given character in the given string.

#include <stdio.h>
#include <string.h>

int strcnt(char[], char);

int main()
{
    char s1[100];
    fgets(s1, sizeof(s1) + 1, stdin);
    s1[strlen(s1) - 1] = 0;
    char c;
    c = getchar();
    int count = strcnt(s1, c);
    printf("your character '%c' occured %d times.", c, count);
}
strcnt(char s1[], char c)
{
    int count = 0;
    for (int i = 0; i < strlen(s1); i++)
        if (s1[i] == c)
            count++;
    return count;
}

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

// 5)  Write a C code to reverse a string by recursion.

#include <stdio.h>
#include <string.h>

void strreverse(char[], int, int);

int main()
{
    char s1[100];
    fgets(s1, sizeof s1, stdin);
    s1[strlen(s1) - 1] = 0;
    strreverse(s1, 0, strlen(s1));
    printf("%s", s1);
}

void strreverse(char s1[], int i, int n)
{
    if (i == n)
        return;
    char tmp = s1[i];
    strreverse(s1, i + 1, n);
    s1[n - i - 1] = tmp;
}

// 6) Write a function ``replace'' which takes a string as a parameter and replaces all spaces in that
// string by minus signs and delivers the number of spaces it replaced.

#include <stdio.h>
#include <string.h>

int replace(char[]);

int main()
{
    char s1[100];
    fgets(s1, sizeof s1, stdin);
    s1[strlen(s1) - 1] = 0;
    printf("your string : %s\nthe number of spaces : %d", s1, replace(s1));
}

int replace(char s1[])
{
    int count = 0;
    for (int i = 0; i < strlen(s1); i++)
        if (s1[i] == ' ')
        {
            s1[i] = '-';
            count++;
        }
    return count;
}

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
    printf("%d, %d, %d, %d, %d, %d\n", MON, TUE, WED, THU, FRI, SAT);
    return 0;
}

// 8) Declare a structure Employee with id_no, salary, birth_date – which is day, month, and year- id
// for 5 tasks the employee has.  For example the data for an employee may be: id_no = 5, salary =
// 7500, birth_date = { day= 3, month= 8, year = 1980}, tasks_ids = {1, 3, 4, 9, 12}.

// a) For the previous declaration, write a function which input one employee data.

// b) For the previous declaration, write a function which take an array of employee’s data and an
// id_no, the function should search for that employee in the employees array and return his salary, or
// return -1 if the employee id not found.

// c) Use all the previous in a program that enter data for 5 employees, then the program takes one
// id_no for an employee, search for it, if found return his salary, otherwise write "NOT FOUND".

#include <stdio.h>

typedef struct
{
    int day, month, year;
} BirthDate;

typedef struct
{
    int id_no, salary;
    BirthDate birth_date;
    int tasks_ids[5];
} Employee;

Employee NewEmployee();
int FindSalary(Employee[], int, int);

int main()
{
    // Employee man1 = NewEmployee();
    int n;
    scanf("%d", &n);
    int id;
    scanf("%d", &id);
    Employee men[n];
    for (int i = 0; i < n; i++)
        scanf("%d%d", &men[i].id_no, &men[i].salary);
    int EmployeeSalary = FindSalary(men, n, id);
    if (EmployeeSalary != -1)
        printf("the salary for your employee is %d", EmployeeSalary);
    else
        printf("NOT FOUND");
}

// a)
Employee NewEmployee()
{
    Employee man;
    scanf("%d %d %d %d %d", &man.id_no, &man.salary,
          &man.birth_date.day, &man.birth_date.month, &man.birth_date.year);
    for (int i = 0; i < 5; i++)
        scanf("%d", &man.tasks_ids[i]);
    return man;
}

// b)

int FindSalary(Employee employees[], int n, int id_no)
{
    for (int i = 0; i < n; i++)
        if (id_no == employees[i].id_no)
            return employees[i].salary;
    return -1;
}

// 9) What is the output of these codes?
// The Output : 16

#include <stdio.h>

int main()
{
    struct s
    {
        double x;
        int y;
    } a_struct;
    printf("The size of a_struct: %d-byte\n", sizeof(a_struct));
}