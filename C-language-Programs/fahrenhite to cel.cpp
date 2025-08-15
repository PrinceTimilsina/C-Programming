#include<stdio.h>
//declaration and definition of function
int degree(int f,int c){

       c=(f-32)*5/9;       //(f-32)*5/9=c;{Formulae to cnvt f to c}
       printf("f=%d",c);  //Displaying the value of c
       return 0;
}
int main(){
  
  	    int f,c;
		printf("Enter temperature to be converted");//asking for temperature to be converted
        scanf("%d",&f);
        degree(f,c);//calling
        return 0;
}
