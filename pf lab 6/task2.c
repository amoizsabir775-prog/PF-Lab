#include<stdio.h>
int main()
{
	int ticket_num,reminder,reversed=0;
	
	printf("Enter the Ticket number");
	scanf("%d",&ticket_num);
	
	while(ticket_num>0){
		reminder=ticket_num%10;
		reversed=(reversed*10)+reminder;
		ticket_num=ticket_num/10; 
		
	}
	printf("The reversed no : %d\n",reversed);
	return 0;
 
	
	
}
