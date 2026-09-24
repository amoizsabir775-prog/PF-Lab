#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;

    //  options to the user
    printf("--- Welcome to the AI Math Calculator ---\n");
    printf("1. Square Root\n");
    printf("2. Power (Base and Exponent)\n");
    printf("3. Absolute Value\n");
    printf("4. Floor (Round down)\n");
    printf("5. Ceiling (Round up)\n");
    printf("Please choose an option (1-5): ");
    scanf("%d", &choice);

    // Decide what to do based on the user's choice
    switch (choice) {
        case 1:
            printf("Enter your number: ");
            scanf("%lf", &num1);
            
            // Check if the number is valid
            if (num1 < 0) {
                printf(" You cannot take the square root of a negative number.\n");
            } else {
                result = sqrt(num1);
                printf("The square root is: %g\n", result);
            }
            break;

        case 2:
            printf("Enter the base number: ");
            scanf("%lf", &num1);
            printf("Enter the exponent (power): ");
            scanf("%lf", &num2);
            
            result = pow(num1, num2);
            printf("The result is: %g\n", result);
            break;

        case 3:
            printf("Enter any number: ");
            scanf("%lf", &num1);
            
            result = fabs(num1); // fabs makes any negative number positive
            printf("The absolute value is: %g\n", result);
            break;

        case 4:
            printf("Enter a decimal number: ");
            scanf("%lf", &num1);
            
            result = floor(num1);
            printf("Rounded down (Floor): %g\n", result);
            break;

        case 5:
            printf("Enter a decimal number: ");
            scanf("%lf", &num1);
            
            result = ceil(num1);
            printf("Rounded up (Ceiling): %g\n", result);
            break;

        default:
            // This runs if the user types something like 7 or 99
            printf("That is not a valid menu option. Please try again!\n");
            break;
    }

    return 0;
}

