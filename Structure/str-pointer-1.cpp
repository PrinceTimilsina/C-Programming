#include<stdio.h>
#include<stdio.h>
struct student{
	int roll_number;
	char name[50];
	float marks;
};
int main(){
	struct student *studentPtr;
	studentPtr= (struct student *)malloc(sizeof(struct student));
	if(studentPtr=NULL){
		printf("Money allocation failed\n");
		return 1;
	}
	printf("Enter roll number of student::\n");
	scanf("%d",&studentPtr->roll_number);
	printf("Enter name of student::\n");
	scanf("%s",&studentPtr->name);
	printf("Enter marks of student::\n");
	scanf("%f",&studentPtr->marks);
	
			printf("Student details::\n");
			printf("Roll number of student::\n",student->roll_number);
			printf("Name of student::\n",studentPtr->name);
			printf("Marks of student::\n",studentPtr->marks);
						
	return 0,
}