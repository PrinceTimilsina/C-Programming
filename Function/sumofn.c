//ABOUT:Write a program using a no-argument, no-return function to find the sum of the first N natural numbers.

#include <stdio.h>
void sumofN();
int main() 
{
    sumofN();
    return 0;
}

void sumofN(){
    int n,i,sum=0;
    printf("Enter the nth Natural number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       sum = sum + i;
    }
    printf("%d is the sum of N natural number",sum);
}