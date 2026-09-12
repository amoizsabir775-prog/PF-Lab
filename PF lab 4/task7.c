#include<stdio.h>
int main()
{
	int data;
	float price,basic,discount,final;
	
	printf("Enter the Data Used in GB\n");
	scanf("%d",&data);
	
	printf("Enter the Price per GB\n");
	scanf("%f",&price);
	
	
    basic=data*price;
	 if(data<50){
	 	// NO Discount is Applied 
	 	discount=0;
	 }
	if(data>=50 && data<=99){
		// 0.05 dicount is applied
		discount=basic*0.05;
	}
	if(data>=100 && data<=199){
	
	// 0.1 discount is applied
	discount=basic*0.1;
}
	if(data>=200){
	
	// 0.15 discount is applied 
	discount=basic*0.1;
}
 final= basic-discount;
 // print the prices 
 
 printf("Basic Cost : %f\n",basic);
 printf("Final Cost :% f\n",final);
 printf("Discount Price :%f\n",discount);
 
 return 0;
 
	
	
	
	
	
	
	
	
	
	
	
}
