#include <stdio.h>

int main() {
    // 1. Declare a 3x4 floating-point array
    float sensor_data[3][4];
    int r, c;

    // 2. Prompt the user to enter data for 3 days and 4 sensors
    printf("--- Enter Temperature Readings for 3 Days (4 Sensors each) ---\n");
    for(r = 0; r < 3; r++) {
        printf("Day %d (4 sensors data): ", r + 1);
        for(c = 0; c < 4; c++) {
            scanf("%f", &sensor_data[r][c]);
        }
    }

    // 3. Ask the user to specify the column index (0 to 3) to be removed
    int target_col;
    printf("\nEnter the column index of the faulty sensor to remove (0 to 3): ");
    scanf("%d", &target_col);

    // 4. Write Nested Loops to perform column deletion by left-shifting
    for(r = 0; r < 3; r++) {
        for(c = target_col; c < 3; c++) {
            sensor_data[r][c] = sensor_data[r][c + 1];
        }
    }

    // 5. Display the updated 3x3 matrix with formatted decimal output
    printf("\n--- Updated 3x3 Sensor Data Matrix ---\n");
    for(r = 0; r < 3; r++) {
        for(c = 0; c < 3; c++) {
            printf("%.2f\t", sensor_data[r][c]);
        }
        printf("\n"); // Agli line par jane ke liye
    }

    return 0;
}
