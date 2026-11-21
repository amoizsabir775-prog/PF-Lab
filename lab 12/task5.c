#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int getCategory(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return 1;
    } else if (ch >= 'a' && ch <= 'z') {
        return 2;
    } else if (ch >= '0' && ch <= '9') {
        return 3;
    } else {
        return 4;
    }
}

float calculateSimilarity(char *pattern, char *attempt) {
    int patLen = strlen(pattern);
    int attLen = strlen(attempt);

    int minLen;
    int maxLen;

    if (patLen < attLen) {
        minLen = patLen;
        maxLen = attLen;
    } else {
        minLen = attLen;
        maxLen = patLen;
    }

    if (maxLen == 0) {
        return 0.0;
    }

    int matches = 0,i;
    for (i = 0; i < minLen; i++) {
        if (getCategory(pattern[i]) == getCategory(attempt[i])) {
            matches++;
        }
    }

    return ((float)matches / maxLen) * 100.0;
}

int main() {
    int n,i;
    char temp[100];

    printf("Enter number of participants: ");
    scanf("%d", &n);

    
    char **attempts = (char **)malloc(n * sizeof(char *));
    float *scores = (float *)malloc(n * sizeof(float));

    
    printf("Enter password pattern string: ");
    scanf("%s", temp);
    char *pattern = (char *)malloc((strlen(temp) + 1) * sizeof(char));
    strcpy(pattern, temp);

   
    for ( i = 0; i < n; i++) {
        printf("Enter password attempt for participant %d: ", i + 1);
        scanf("%s", temp);

        attempts[i] = (char *)malloc((strlen(temp) + 1) * sizeof(char));
        strcpy(attempts[i], temp);

        scores[i] = calculateSimilarity(pattern, attempts[i]);
    }

    
    printf("\n Similarity Results\n");
    for (i = 0; i < n; i++) {
        printf("Participant %d (%s): %.2f%%\n", i + 1, attempts[i], scores[i]);
    }

    
    int bestIndex = 0;
    for (i = 1; i < n; i++) {
        if (scores[i] > scores[bestIndex]) {
            bestIndex = i;
        }
    }

    printf("\nHighest Similarity Password: %s (%.2f%%)\n", attempts[bestIndex], scores[bestIndex]);

    
    free(pattern);
    for (i = 0; i < n; i++) {
        free(attempts[i]);
    }
    free(attempts);
    free(scores);

    return 0;
}
