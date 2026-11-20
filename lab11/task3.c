#include<stdio.h>
#include<stdlib.h>
struct item {
	int id;
	int quantity;
	int unit_price;
	char name[50];
	
} item;

int main(){
	struct item items[5];
	int i;
	int searchId;
int found = 0;
	for(i=0;i<5;i++){
		printf("Enter the value of id");
		scanf("%d",&items[i].id);
		
		printf("Enter the Quantity");
		scanf("%d",&items[i].quantity);
		
		
		
		printf("Enter the unit_price");
		scanf("%d",&items[i].unit_price);
		
		printf("Enter the name");
		scanf("%49s",items[i].name);
		
		
		long long totalValue = 0;
		
	totalValue=totalValue +	(items[i].quantity * items[i].unit_price);
	printf("Total  Value: %d\n", totalValue);
	}
	
//	printf("Total  Value: %d\n", totalValue);

    printf("Enter Item ID to search: ");
    scanf("%d", &searchId);
	
	for(i=0;i<5;i++){
		if (items[i].id == searchId){
		
		
		printf("\n Item found \n");
		printf("ID: %d\n", items[i].id);
            printf("Name: %s\n", items[i].name);
            printf("Quantity: %d\n", items[i].quantity);
            printf("Unit Price: %d\n", items[i].unit_price);
            found = 1;
            break;
	}
	}

     if (!found) {
        printf("\nItem with ID %d not found.\n", searchId);
    }

    return 0;	
	
	
	
}
