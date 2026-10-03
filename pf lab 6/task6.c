#include<stdio.h>
int main()
{
	int digit,num;
	int even_count=0;
	int odd_count=0;
	
	printf("Enter the num");
	scanf("%d",&num);
	 while(num>0){
	 
	digit=num%10;
	num=num/10;
    
	if(digit%2==0){
		printf("The digit is even\n");
		even_count++;
		
	}
   else{
   	printf("The digit is odd\n");
   	odd_count++;
   }
   }
   
	printf("Total even no are :%d\n",even_count );
	printf("Total odd no are :%d\n",odd_count);

return 0;
}


