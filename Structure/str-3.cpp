//Creating a structure named student with name,roll-no,and marks as member.
#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[10];
	int roll_no;
	int marks;
};
int main()
{
	
	struct student std[5];
	for(int i=1;i<=5;i++){
	printf("Enter student's name");
	scanf("%s",std[i].name);
	printf("Enter roll-no");
	scanf("%d",&std[i].roll_no);
	printf("Enter marks");
	scanf("%d",&std[i].marks);
}
    for(int i=1;i<=5;i++){
    	printf("%s",std[i].name);
    	printf("%d",std[i].roll_no);
    	printf("%d",std[i].marks);
	}
	return 0;
}