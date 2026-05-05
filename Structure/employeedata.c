#include<stdio.h>
#include<stdlib.h>
struct employee{
	int employee_id;
	char f_name[50]; 
	char l_name[50];  
	float salary; 
};
int main(){
	struct employee *emp[7];  
	for(int i=0;i<=7;i++){
	emp[i]= (struct employee *)malloc(sizeof(struct employee));
	
		printf("Enter %d employee id:-",i+1);-\  
		
		  
		scanf("%d", emp[i]->employee_id);
		printf("Enter %d employee  first name:-",i+1);
		scanf("%s", emp[i]->f_name); 
		printf("Enter %d employee last name:-",i+1);
		scanf("%s", emp[i]->l_name);
		printf("Enter %d employee salary:-",i+1);
		scanf("%f", emp[i]->salary);   
	}
	for(int i=0;i<=7;i++){
		printf("Employee id is %d:-",emp[i]->employee_id);
		
		printf("Employee first name is %s:-",emp[i]->f_name);
	
		printf("Employee first name is %s:-",emp[i]->l_name);
		
		printf("Employee salaryis %f:-",emp[i]->salary);
		
	}
	for(int i=0;i<=7;i++){
		free(emp[i]); 
	}
return 0;
}
