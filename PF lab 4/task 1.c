#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter the three number\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	if (num2==num3 && num2==num1) {
			printf("All number are equal");
			
		}
	
	else if(num1>num2 && num1>num3){
		printf("Number 1 is greatest\n");
	}
	else if(num2>num1 && num2>3){
		printf("Number 2 is greatest\n");
	}
	else if(num3>num2 && num3>num1){
		printf("Number 3 is greatest");
	}
	else if (num1==num2){
		printf("Number 1 and number 2  is equal");
		
	}
	else if (num1==num3){
		printf("Number 1 and number 3  is equal");
}
    else if (num2==num3){
		printf("Number 2 and number 3  is equal"); 
		}
		
		
		
    return 0;
}
