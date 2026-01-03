//2d Array
#include<stdio.h>

int main()
{  int A[3][2],i,j;
	printf("Enter an element");
	for(i=0; i<3; i++){
		for(j=0;j<2;j++){
			scanf("%d",&A[i][j]);
		}
	
	}
		for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d",A[i][j]);
		}
	
	}
	


     return 0;
 
   
}
