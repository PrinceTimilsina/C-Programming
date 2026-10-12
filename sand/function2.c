//user defined function:
//WAP to find factor of given number:
//no argument no return
#include<stdio.h>
int factor();
int main(){
  factor();
  return 0;
}
int factor(){
    int n,i;
    printf("Enter a number to find its factors:\t");
    scanf("%d",&n);
    printf("The factors of %d are:",n);
    for(i=1;i<n;i++){
        if(n%i==0){
          printf("%d\t",i);
          continue;
        }
    }
    return 0;
}