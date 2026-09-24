#include<stdio.h>
int main()

{
	int model_accuracy,confidence_score,dataset_size,user_role,model_status,model_deployment;
	float model_score;
	
	printf("Enter the Moel Accuracy ");
	scanf("%d", &model_accuracy);
	printf("Enter the Confidence Score");
	scanf("%d", &confidence_score);
	printf("Enter the Data Set Size ");
	scanf("%d", &dataset_size);
	printf("Enter the Model Status(1=ready,2=testing,3=training) ");
	scanf("%d", &model_status);
	
	printf("Enter the Model Deployment(1=deployed permission ,0=not deployed permission)");
	scanf("%d",&model_deployment);
	
	if(model_accuracy>=80 && confidence_score>=75 && dataset_size>=1000 && model_status==1 && model_deployment==1){
		
		printf("Deployment Ready");
	}
	
	
	model_score=(model_accuracy+confidence_score)/2;
	printf("Model Score %.2f\n",model_score);
	printf("Enter the User role(1 = Admin, 2 = Developer, 3 = Researcher)");
	scanf("%d", &user_role);
	printf("User Role is %d \n",user_role);
	printf("Model Status is %d\n",model_status);


    return 0;
	
	
	
	
	
}
