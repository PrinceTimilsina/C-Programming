#include<stdio.h>
  union student
  
  {
  	char name[30];
  	int roll;
  	float marks;
  };
  int main()
  {
  	union student s;
  	printf("size of union s is %d",sizeof(s));
  	printf("\n Enter name");
  	scanf("%s",s.name);
  
  	printf("\nEnter roll");
  	scanf("%d",s.roll);
  	printf("\n Enter marks");
  	scanf("%f",&s.marks);
  	printf("\nName:%s\nRoll:%d\nMarks:%f",s.name,s.roll,s.marks);
  	return 0;
  }