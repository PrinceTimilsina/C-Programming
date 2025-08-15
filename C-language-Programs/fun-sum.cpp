#include<stdio.h>
int sum(int a,int b);
int main(){
	
	int n1,n2,result;
	printf("Enter First number:\t");
		scanf("%d",&n1);
    printf("Enter Second number:\t");
    	scanf("%d",&n2); 
	result=sum(n1,n2);
	printf("The sum of given two number is :\t%d",result);	 
	
}
int sum(int a,int b){
	return a+b;
}
