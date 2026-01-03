#include<stdio.h>
#include<stdlib.h>
   union member{
   	int x;
   	float y;
   	char name;
   };
   int main()
   {
   	union member mem;
   	mem.x=56;
   	printf("The integer value is %d \n \t",mem.x);
   	mem.y=45.78;
   	printf("The floating point value is %f \n \t",mem.y);
   	return 0;
   }