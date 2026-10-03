#include<stdio.h>
int main()
{
	int status;
	int present_student=0;
	int total_student=30;
	int i;
	
	for( i=1; i<=15; i++){
		
		printf("Enter the status 0 for abscent and 1 for present");
		scanf("%d",&status);
		
		if(status==1)
		present_student++;
	}
	// schecking the abscent student
	

  int abscent_student=total_student-present_student;
 // abscent_student=total_student-present_student;
  printf("The present_student are %d",present_student);
  printf("The abscent_student are %d",abscent_student);
  
	
	return 0;
	
}
