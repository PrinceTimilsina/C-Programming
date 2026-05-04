#include<stdio.h>
#include<math.h> //for using func like pow()
     
  int main()
  {
     	int i,n,temp,r,s=0;
     	printf("Enter a number");
		 scanf("%d",&n);
		 temp=n;
		 for(i=1;i<=1000;i++)
		 {
		  while(n!=0){
     		r=n%10;
     		s=s+pow(r,3);
			n=n/10;
		 }
		 }
        if(temp==s){
        	printf("%d is armostrong number",temp);
		}
		else{
			printf("%d is not  armostrong  number",temp);
		}
		 return 0;
	 }
