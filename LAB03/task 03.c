#include<stdio.h>
int main()
{
	int age;
	
	printf("Enter your age");
	scanf("%d",&age);
	printf("Age :%d\n",age);
	
	char grade[5];
	printf("Enter your grade");
	scanf(" %4s",grade);
	printf("Grade :%s\n", grade);
	
	int height;
	printf("Enter your height");
	scanf("%d",&height);
	printf("Height :%d\n",height);
	return 0;
	
	
}
