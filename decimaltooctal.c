//WAP to input decimal number and convert it into octal number;
//#include<stdio.h>
//int main(){
//	int n,q;
//	printf("Enter a decimal number: ");
//	scanf("%d",&n);
//	a=(n%8==0);
//	for(int i=0;i<a;i++){
//		q=(n/8);
//		printf(q);
//	}
//	return 0;
//}

#include<stdio.h>
int main() {
    int n;
    printf("Enter decimal number: ");
    scanf("%d",&n);
    printf("Octal=%o",n);
    return 0;
}

