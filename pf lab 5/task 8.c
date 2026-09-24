#include <stdio.h>

int main() {
    int permission;

    // Ask the user for their permission number
    printf("Enter your permission code (0 to 15): ");
    scanf("%d", &permission);

    printf("\nYour Access List:\n");

    // 1. Check each permission one by one
    if ((permission & 1) != 0) {
        printf("- You can VIEW the model\n");
    }
    if ((permission & 2) != 0) {
        printf("- You can TRAIN the model\n");
    }
    if ((permission & 4) != 0) {
        printf("- You can TEST the model\n");
    }
    if ((permission & 8) != 0) {
        printf("- You can DEPLOY the model\n");
    }

    // 2. Check if they have BOTH Training (2) and Deployment (8)
    printf("\nSpecial Check:\n");
    
    if ((permission & 2) && (permission & 8)) {
        printf("Result: You have BOTH training and deployment powers!\n");
    } else {
        printf("Result: You are missing either training or deployment power.\n");
    }

    return 0;
}

