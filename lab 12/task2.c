#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, i;
    char **feedback = NULL;

    printf("Enter number of feedback entries: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Invalid input.\n");
        return 1;
    }

   
    feedback = (char **)malloc(1 * sizeof(char *));
    if (feedback == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
	
        if (i > 0) {
            feedback = (char **)realloc(feedback, (i + 1) * sizeof(char *));
            if (feedback == NULL) {
                printf("Memory reallocation failed.\n");
                return 1;
            }
        }

        feedback[i] = (char *)malloc(100 * sizeof(char));
        printf("Enter feedback %d: ", i + 1);
        scanf("%99s", feedback[i]);
    }

    
    int totalChars = 0;
    char *longest = feedback[0];

    for (i = 0; i < n; i++) {
        char *p = feedback[i];
        totalChars += strlen(p);

        if (strlen(p) > strlen(longest)) {
            longest = p;
        }
    }

    printf("\nAll feedback entries:\n");
    for (i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, feedback[i]);
    }

    printf("\nTotal characters: %d\n", totalChars);
    printf("Longest feedback: %s\n", longest);

    for (i = 0; i < n; i++) {
        free(feedback[i]);
    }
    free(feedback);

    return 0;
}
