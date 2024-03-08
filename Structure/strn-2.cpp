#include <stdio.h>

struct Employee {
    int id;
    char firstName[20];
    char lastName[20];
    float salary;
};

int main() {
    struct Employee employees[7];
    int i;
    
    // Input data for 7 employees
    for (i = 0; i < 7; i++) {
        printf("Enter Employee %d ID: ", i + 1);
        scanf("%d", &employees[i].id);
        
        printf("Enter Employee %d First Name: ", i + 1);
        scanf("%s", employees[i].firstName);
        
        printf("Enter Employee %d Last Name: ", i + 1);
        scanf("%s", employees[i].lastName);
        
        printf("Enter Employee %d Salary: ", i + 1);
        scanf("%f", &employees[i].salary);
    }
    
    // Print records
    printf("\nEmployee Records:\n");
    for (i = 0; i < 7; i++) {
        printf("Employee %d\n", i + 1);
        printf("ID: %d\n", employees[i].id);
        printf("First Name: %s\n", employees[i].firstName);
        printf("Last Name: %s\n", employees[i].lastName);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("\n");
    }
    free(employees);
    
    return 0;
}