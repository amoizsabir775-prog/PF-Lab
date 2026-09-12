#include<stdio.h>
int main()
{
	float accuracy;
	int  latency;
	int can_deploy=1 ,approval_status;
	printf("Enter the Model Accuracy (%%)\n");
	scanf("%f",&accuracy);
	
	printf("Enter the Latency (ms)\n");
	scanf("%d",&latency);
	
	printf("Enter the approval Status ( 1= approved ,0 = Not approved )\n");
	scanf("%d",&approval_status);
	// Develpoment Conditions
	 if (accuracy<90.0){
	 	printf("Accuracy is Too low ");
	 	can_deploy=0;
	 	
	 }
	 
	  if(latency>100){ 
    printf("Latency is Too High");
    can_deploy=0;
	  }
     if (approval_status=!1){
     	printf("Model not approved");
     	can_deploy=0;
	 }
	 if(can_deploy==1){
	 	printf("Model can be deployed\n");
	 }	 
	return 0;
	
	
	
}
