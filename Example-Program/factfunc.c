#include<stdio.h>
  int fun(int n)
  {
  	if (n==1)
  	{
  		return 1; //return 1 
	  }
	  else
	    return 1+fun(n-1);   //1+fun(2) //1+fun(1)
  }
  int main()   
  {
  	int n=3;
  	printf("%d",fun(n));     //n=3
  	return 0;
  }
