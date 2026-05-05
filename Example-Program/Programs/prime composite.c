#include<stdio.h>
 int main(){
 	int n,r,c=1,f=0;
 	printf("ENTER A NUM");
 	scanf("%d",&n);
 	while(c>=n)
	 {
 		r=n%c;
 		if(r==0){
 			f=f+1;
		 }c++;
	 }
	 if(f==2){
	 	printf("%d is prime",n);
	 }
	 else{
	 	printf("%d is composite",n);
	 	if(r==1){
	 		printf("THe number is not prime nor composite",n);
		 }
	 }
	 return 0;
 }
