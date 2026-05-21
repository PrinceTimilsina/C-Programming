//To Store 10 integers and Display them
#include <stdio.h>
int main() {
   int arr[10],i;
   printf("Enter any 10 integer;");
   for(i=0;i<10;i++)
   {
       scanf("%d \n",&arr[i]);
   }
   printf("The 10 integers you entered are;");
     for(i=0;i<10;i++)
   {
       printf("%d ",arr[i]);
   }
    return 0;
}