#include<stdio.h>
  struct student{
  	char title[20];
  	char author[20];
  	char publisher[20];
  	float price;
  };
  int main()
  {
  	struct student stud;
  	printf("Enter the title");
  	scanf("%s",stud.title);
  	printf("Enter author's name");
  	scanf("%s",stud.author);
  	printf("Enter publisher's name");
  	scanf("%s",stud.publisher);
  	printf("Enter the price");
  	scanf("%f",& stud.price);
  	
  
    printf("The title is %s",stud.title);
       printf("The author's name is %s",stud.author);
          printf("The publisher's name is %s",stud.publisher);
             printf("Price is %f",stud.price);
    
    return 0;
	    }
