#include<stdio.h>
int main()
{


 char name[100];
	printf("Enter THe Student name");
	scanf("%[^\n]", name);
   printf("student name:%s\n", name);
		
	int age;
	printf("Enter THe age");
	scanf("%d",&age);
	printf("Age:%d\n", age);
	
	char grade[100];
	printf("Enter THe Grade");
	scanf("%[^\n]", grade);
   printf("Product name:%s\n", grade);
   
   float height;
	printf("Enter THe Height");
	scanf("%f",&height);
	printf("Height:%.2f\n", height);
	
	float cgpa;
	printf("Enter CGPA");
	scanf("%f",&cgpa);
	printf("CGPA:%.2f\n", cgpa);
	
	return 0;
}
