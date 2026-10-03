#include <stdio.h>

int main() {
    int n,i,j;

    printf("Enter the size for daimond: ");
    scanf("%d", &n);

    // TOP HALF (including middle row)
    for (i = 1; i <= n; i++) {
        // Print leading/outer spaces
        for ( j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print first border star
        printf("*");

        // Print inner spaces
        if (i > 1) {
            for ( j = 1; j <= 2 * i - 3; j++) {
                printf(" ");
            }
            // Print second border star
            printf("*");
        }

        printf("\n");
    }

    // BOTTOM HALF
    for (i = n - 1; i >= 1; i--) {
        // Print leading/outer spaces
        for ( j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print first border star
        printf("*");

        // Print inner spaces
        if (i > 1) {
            for ( j = 1; j <= 2 * i - 3; j++) {
                printf(" ");
            }
            // Print second border star
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
