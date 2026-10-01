#include <stdio.h>

struct Employee
{
    char name[20];
    int id;
    float salary;
};

int main()
{
    struct Employee emp[15];
    int i;

    for(i = 0; i < 15; i++)
    {
        printf("\nEnter details of employee %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", emp[i].name);
        printf("Enter ID: ");
        scanf("%d", &emp[i].id);
        printf("Enter salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\nEmployee Information:\n");

    for(i = 0; i < 15; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Name = %s\n", emp[i].name);
        printf("ID = %d\n", emp[i].id);
        printf("Salary = %.2f\n", emp[i].salary);
    }
    return 0;
}