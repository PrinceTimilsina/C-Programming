//ABOUT:c program to read  length and breadth of winddow and fine its perimeter using function;
#include <stdio.h>
int perimeter();
int main() {
    int p;
    p=perimeter();
    printf("Perimeter of rectangle is : %d",p);
    return 0;
}
int perimeter(){
    int l,b,p;
    printf("Enter the length and breadth of rectangle respectively: \t");
    scanf("%d%d",&l,&b);
    p=2*(l+b);
    return p;
}