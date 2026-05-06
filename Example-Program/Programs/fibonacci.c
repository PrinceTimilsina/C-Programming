// to display fibonacci series 0 1 1 2 3 5 8...........10 th term
#include<stdio.h>
int main(){
	int i,a=0,b=1,c;
	for(i=1;i<=10;i++){
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
