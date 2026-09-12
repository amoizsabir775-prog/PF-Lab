#include<stdio.h>
int main(){
	char name[50];
	printf("Enter your name");
	scanf(" %[^\n]",& name);
	printf("name : %s\n",name);
	int age;
	printf("Enter your age\n ");
	scanf("%d",& age);
	printf("age : %d\n",age);
	
	char city[24];
	printf("Enter your City");
	scanf(" %[^\n]",& city);
	printf("city : %s\n",city);
	
	
	
	return 0;
	
}
