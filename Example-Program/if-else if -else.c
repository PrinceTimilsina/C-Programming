//Using-if-elseif-else for displaying either the given number is positive,negative or zero,it's just basic or. example program of if else if else
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	if(n>0){
		printf(" %d is Positive Number",n);
	}
	else if(n<0){
	    printf("%d is Negative Number",n);
	 }
	 else{
	 	printf("Given number is `ZERO`");
	 }
	 return 0;
}
