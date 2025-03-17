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
    {
        scanf("%d%d", &men[i].id_no, &men[i].salary);
    }
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
    {
        if (id_no == employees[i].id_no)
        {
            return employees[i].salary;
        }
    }
    return -1;
}
