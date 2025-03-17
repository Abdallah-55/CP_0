#include <stdio.h>

// 8) Declare a structure Employee with id_no, salary, birth_date – which is day, month, and year- id
// for 5 tasks the employee has.  For example the data for an employee may be: id_no = 5, salary =
// 7500, birth_date = { day= 3, month= 8, year = 1980}, tasks_ids = {1, 3, 4, 9, 12}.

// a) For the previous declaration, write a function which input one employee data.

// b) For the previous declaration, write a function which take an array of employee’s data and an
// id_no, the function should search for that employee in the employees array and return his salary, or
// return -1 if the employee id not found.

// c) Use all the previous in a program that enter data for 5 employees, then the program takes one
// id_no for an employee, search for it, if found return his salary, otherwise write "NOT FOUND".

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
