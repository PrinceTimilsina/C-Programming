//There are mainly two types of function: library function and user defined function,
//IN this first program of funciton we will have a look at library function
//finding square root by using  sqrt function
#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("The square root is: %f", sqrt(n));
    return 0;
}
