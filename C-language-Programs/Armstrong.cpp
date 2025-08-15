#include<stdio.h>
#include<math.h>
     int main(){
     	int i,n,nn,r,s=0;
     	printf("Enter a number");
		 scanf("%d",&n);
		 nn=n;
		 for(i=1;i<=1000;i++){
		 
     	while(n!=0){
     		r=n%10;
     		s=s+pow(r,3);
			 n=n/10;
		 }
		 }
        if('nn'==s){
        	printf("%d is armostrong number",'nn');
		}
		else{
			printf("%d is not  armostrong  number",'nn');
		}
		  

		 
		  return 0;
	 }
