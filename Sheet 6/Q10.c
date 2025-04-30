#include <stdio.h>

typedef union
{
    char *state;
    char *country;

} location;

typedef struct
{
    char *name;
    int age;
    int iscitizen;
    location location;

} user;

int main()
{
    user user1;
    char c;
    scanf("%s%d", user1.name, &user1.age);
    printf("Are you US citizen? (y/n)\n");
    scanf(" %c", &c);
    if (c == 'y')
    {
        user1.iscitizen = 1;
        printf("what state you come from?\n");
        scanf("%s", user1.location.state);
    }
    else
    {
        user1.iscitizen = 0;
        printf("what country you come from?\n");
        scanf("%s", user1.location.country);
    }
    // printf("Name: %s\nAge: %d\nUS Citizen? %d\nLocation: %s", user1.name, user1.age, user1.iscitizen, user1.location);
}