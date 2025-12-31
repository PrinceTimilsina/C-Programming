//Swapping two variables without using temporary variable
#include<stdio.h>
int main(){
	int a,b;
	printf("Enter any two numbers: ");
	scanf("%d%d",&a,&b);  //a=5,b=4
	printf("Input values to be swapped are:%d,%d \n1",a,b);
	a=a+b;               //a=9
	b=a-b;              //b=9-4=5
	a=a-b;             //a=9-5=4
	printf("The swapped values are: %d and %d respectively.",a,b);
	return 0;
}
