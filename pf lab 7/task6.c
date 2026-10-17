#include <stdio.h>

int main() {
    //  a 2D integer array with extra row capacity (4 rows, 3 columns)[cite: 9]
    int shifts[4][3];
    int i, j;

    // 2. inpit to the initial 3x3 production data[cite: 9]
    printf("--- Enter Initial 3x3 Production Data ---\n");
    for(i = 0; i < 3; i++) {
        printf("Enter values for Workstation %d (3 shifts): ", i);
        for(j = 0; j < 3; j++) {
            scanf("%d", &shifts[i][j]);
        }
    }

    // 3.enter the target row index and input 3 new production values[cite: 9]
    int target_index;
    printf("\nEnter target row index for emergency shift insertion (e.g., 1): ");
    scanf("%d", &target_index);

    int new_row[3];
    printf("Enter 3 new production values: ");
    for(j = 0; j < 3; j++) {
        scanf("%d", &new_row[j]);
    }

    
    for(i = 3; i > target_index; i--) {
        for(j = 0; j < 3; j++) {
            shifts[i][j] = shifts[i - 1][j]; //[cite: 9]
        }
    }

    
    for(j = 0; j < 3; j++) {
        shifts[target_index][j] = new_row[j];
    }

    
    printf("\n--- Resulting 4x3 Production Matrix ---\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", shifts[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}
