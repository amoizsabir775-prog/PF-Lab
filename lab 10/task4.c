#include <stdio.h>

int main() {
    char customerName[50];
    int accountNumber;
    float withdrawalAmount;
    
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    
    printf("Enter Account Number: ");
    scanf("%d", &accountNumber);
    
    printf("Enter Withdrawal Amount: ");
    scanf("%f", &withdrawalAmount);
    
    FILE *fptr = fopen("bank_log.txt", "a");
    
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    fprintf(fptr, "Customer Name: %s, Account Number: %d, Withdrawal Amount: %.2f\n", customerName, accountNumber, withdrawalAmount);
    
    fclose(fptr);
    
    printf("Transaction logged successfully to bank_log.txt\n");
    
    return 0;
}
