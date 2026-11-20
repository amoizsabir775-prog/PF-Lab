#include<stdio.h>
struct Product{
	int id;
	char name[30];
	char category[30];
	float price;
	int available_quantity;
}  product1 ,product2;
  void displayProductDetails(struct Product p) {
    float finalPrice = p.price - (p.price * 0.05f); 

    printf("ID: %d\n", p.id);
    printf("Name: %s\n", p.name);
    printf("Category: %s\n", p.category);
    printf("Original Price: %.2f\n", p.price);
    printf("Final Price (5%% off): %.2f\n", finalPrice);
    printf("Available Stock: %d\n\n", p.available_quantity);
}

 int main(){
 	struct Product product1 = {1,"suite","clothing ",200 ,3};
 	struct Product product2 = {2,"shalwar kameez","clothing ",200 ,3};
 	displayProductDetails(product1);
    displayProductDetails(product2);

    return 0;
 	
 
 }
