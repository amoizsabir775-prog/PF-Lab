#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,n;
	printf("Enter the value of n");
	scanf("%d",&n);
	
	if (n <= 0) {
        printf("Invalid number of categories.\n");
        return 1;
    }
    int *stock = (int *)malloc(n * sizeof(int));
    if (stock == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    
    for (i = 0; i < n; i++) {
        printf("Enter stock for category %d: ", i);
        scanf("%d", &stock[i]);
    }
    int total = 0;
    int minIndex = 0;

    for (i = 0; i < n; i++) {
        total += stock[i];
        if (stock[i] < stock[minIndex]) {
            minIndex = i;
        }
    }
    
    float average = (float)total / n;
    printf("\nTotal stock: %d\n", total);
    printf("Average stock per category: %.2f\n", average);
    printf("Category index with lowest stock: %d (Stock: %d)\n", minIndex, stock[minIndex]);

    int updateIdx, newStock;
    printf("\nEnter category index to update (0 to %d): ", n - 1);
    scanf("%d", &updateIdx);

    if (updateIdx >= 0 && updateIdx < n) {
        printf("Enter new stock quantity: ");
        scanf("%d", &newStock);
        stock[updateIdx] = newStock;
        printf("Updated stock at index %d to %d.\n", updateIdx, stock[updateIdx]);
    } else {
        printf("Invalid category index.\n");
    }

    free(stock);
    stock = NULL;

    return 0;
}
    
    
    
	
	
	
	
	

