//Write a C program using an argument but no return value function to find the square of a number.
#include <stdio.h>

void square(int n);

int main()
{
     int n;
     printf("Enter a number to find its square: ");
     scanf("%d",&n);
     square(n);
}

void square(int n)
{
   printf("square is %d",n*n);
}