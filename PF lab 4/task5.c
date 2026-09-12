#include<stdio.h>
int main()
{
	int user_role,security_level;
	int account_status;
	printf("Enter the account status(1=active ,0=inactive )");
	scanf("%d",&account_status);
	
	printf("Enter the user rule (1=admin,2=researcher,3=student)");
	scanf("%d",&user_role);
	
	printf("Enter the security level");
	scanf("%d",&security_level);
	
	
	if(account_status!=1){
		printf("Denied Access");
		// when the accpount is active you can check all roles here 
		
	}
	if(user_role==1){// admin
	if(security_level>=3){
		printf("Access Granted");
		}else {
			printf("Acess denied");
		}
}
	
	 else if(user_role==2) { // Researcher 
	if(security_level>=2) {
		printf("Access Granted\n");
		}
		else {
			printf("Access denied\n");
		}
	}
	
    
    	
		
				else if(user_role==3) {// Student
	if(security_level>=1){
		printf("Access Granted\n");
		}else {
			printf("Access denied\n");
		
	}
	}
    
    	
		}

