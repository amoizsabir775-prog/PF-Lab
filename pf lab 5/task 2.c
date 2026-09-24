#include<stdio.h>
int main()
{
	// person eliglibity for loan
	
	int income,credit_score,age;
	int Existing_loan;
	
	printf("Enter the income\nEnter the Credit Score\nEnter the age\nEnter the Existing_loan( yes(1) or No(0))\n ");
	scanf("%d %d %d %d", &income, &credit_score, &age, &Existing_loan);
    
	if(income>=100000 && credit_score>=750 && age>=21 && Existing_loan==0){
	
	
	printf("High Approval chance");
}
	else if(income>=75000 && credit_score>=650 && age>=21 && Existing_loan==1){
	
	
	printf("Manual Review");
}

	else if(income>=50000 && credit_score>=600 && age>=21 ){
	
	
	printf("Possibly Eligible");
}
		else {
	
	
	printf("Rejected: Does not meet any of the criteria above");
}
	
	
	
	
}
