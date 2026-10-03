#include<stdio.h>
int main()
{
	int sum=0,PIN;
	printf("Enter thr 4 digit PIN");
	scanf("%d",&PIN);
	
	while(PIN>0){
		
		sum+=PIN%10;
		PIN = PIN/10;
	}
	
	
	if(sum>10){
	
	
	printf("THE NUM IS STRONG");}
	else{
	
	("The no is weak");}
	

	return 0;
}
	
     
     
	
	
	
	

