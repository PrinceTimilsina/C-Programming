#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	do{
		n=n+2;
		printf("The num is %d",n);
		n++;
	}
	while(n<5);
	return 0;
}
