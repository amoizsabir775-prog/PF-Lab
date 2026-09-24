#include<stdio.h>
int main()

{
	float recognized_percent; int user_type;
	printf("Enter yoyr Face Reconized Percentage\nEnter your User Type(1== autherized,2== unoutherized)\n");
	scanf("%f %d",&recognized_percent,&user_type);
	
	if(recognized_percent>=80 && user_type==1)
	{
		printf("Access Granted");
	}
	
	else if (recognized_percent<50 || user_type==0)
	{
		printf("Access Denied");
	}
	return 0;
}
