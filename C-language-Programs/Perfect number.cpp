include<stdio.h>
#i#nclude<conio.h>
int main(){
	int n,s=0,i,r;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<n/2;i++){
		r=n%i;
		if(r==0){
			s=s+i;
		}
	}
	if(n==s){
		printf("%d is perfect number",n);
	}
	else{
		printf("%d is not perfect number",n);
	}
	getch ();
	return 0;
}