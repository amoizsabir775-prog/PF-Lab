#include<stdio.h>
int main()
{
	
	char stu_name[3][50];
	int mark[3][3];
	int i;
	int n=3;
	for(i=0;i<n;i++){
		printf("Enter the student name %d",i+1);
		
		scanf(" %[^\n]",stu_name[i]);
		
	
	}
	int sum=0;
	int j;
	for (j=0;j<n;j++){
		printf("Enter the marks of student %d" ,j+1);
		
		scanf(" %d",&mark[i][j]);
		sum=sum+mark[i][j];
	}
	float average=sum/3.0;
	printf("student %s | avaerage marks %.2f\n\n",stu_name[i],average);
	
	
	
	
}
