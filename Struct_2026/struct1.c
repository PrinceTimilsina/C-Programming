//ABOUT:
#include <stdio.h>
struct Student
{
    char name[20];
    int age;
    float marks;
};
int main() {
    struct Student s1;

    printf("Enter name of the student: ");
    scanf("%s",s1.name);
    printf("Enter age of the student: ");
    scanf("%d",&s1.age);
    printf("Enter marks of the student: ");
    scanf("%f",&s1.marks);
   
    printf("\nStudent Information:\n");
    printf("Name = %s\n", s1.name);
    printf("Age = %d\n", s1.age);
    printf("Marks = %.2f\n", s1.marks);

    return 0;
}