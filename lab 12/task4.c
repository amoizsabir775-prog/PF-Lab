#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;

    printf("Enter number of movie categories: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of categories.\n");
        return 1;
    }

    int *ratings = (int *)malloc(n * sizeof(int));
    if (ratings == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter rating count for category %d: ", i);
        scanf("%d", &ratings[i]);
    }

    int total = 0;
    int maxIndex = 0;

    for (i = 0; i < n; i++) {
        total += ratings[i];
        if (ratings[i] > ratings[maxIndex]) {
            maxIndex = i;
        }
    }

    float average = (float)total / n;

    printf("\nTotal ratings across all categories: %d\n", total);
    printf("Average ratings per category: %.2f\n", average);
    printf("Category with highest rating count: index %d (Ratings: %d)\n", maxIndex, ratings[maxIndex]);

    int updateIdx, newCount;
    printf("\nEnter category index to update (0 to %d): ", n - 1);
    scanf("%d", &updateIdx);

    if (updateIdx >= 0 && updateIdx < n) {
        printf("Enter new rating count: ");
        scanf("%d", &newCount);
        ratings[updateIdx] = newCount;

        // Recalculate and display updated values
        total = 0;
        maxIndex = 0;
        for (i = 0; i < n; i++) {
            total += ratings[i];
            if (ratings[i] > ratings[maxIndex]) {
                maxIndex = i;
            }
        }
        average = (float)total / n;

        printf("\n--- Updated Rating Summary ---\n");
        printf("Updated rating at index %d: %d\n", updateIdx, ratings[updateIdx]);
        printf("Total ratings: %d\n", total);
        printf("Average ratings per category: %.2f\n", average);
        printf("Highest rating category: index %d (Ratings: %d)\n", maxIndex, ratings[maxIndex]);
    } else {
        printf("Invalid category index.\n");
    }

    free(ratings);
    ratings = NULL;

    return 0;
}
