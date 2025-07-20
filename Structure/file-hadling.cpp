//file-handling-example program
#include<stdio.h>
int main()
{
	FILE *fp;
	char text[100]; 
	
	//text is that variable where the value that has been written is stored.
	//Open file for writing 
	//syntax of file handling ; fopen(filename, mode);
	
	fp = fopen("example.txt", "w");
	if (fp==NULL)
	{
		printf("Error opening file!\n");
		return 1;
	}
	
	//Write to file
	
	fprintf(fp,"Hello,World!\n");
	
	//fprintf is the statement that allows to write
	//close file
	
	fclose(fp);
	
	//open file for reading
	
	fp = fopen("example.txt", "r");
	if (fp== NULL){
		printf("Error opening file!\n");
		return 1;
	}
	
	//read from file 
	
	fscanf(fp, "%[^\n]",text);
	printf("Read from file: %s\n",text);
	
	//close file
	
	fclose(fp);
	
	return 0;
}
