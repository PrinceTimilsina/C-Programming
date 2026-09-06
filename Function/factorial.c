//Write a C program to find the factorial of a number using a function.
//factorial of 5 = 1 x 2 x 3 x 4 x 5 = 120
#include<stdio.h>
int factorial();
int main(){
   factorial();
   return 0;
}

int factorial(){
    int n,f=1;
   printf("Enter a number to find its factorial: ");
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
    f*=i;
   }
   printf("The Factorial is: %d",f);
}
