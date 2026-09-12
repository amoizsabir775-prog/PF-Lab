#include<stdio.h>
 int main()
 {
 
 
    char name[100];
	printf("Enter THe Product name");
	scanf("%[^\n]", name);
   printf("Product name:%s\n", name);
		
	int quantity;
	printf("Enter THe Quantity");
	scanf("%d",&quantity);
	printf("Product Quantity:%d\n", quantity);
	
	
	float price;
	printf("Enter THe price");
	scanf("%f",&price);
	printf("Product Price:%.2f\n", price);
	
	return 0;
}
