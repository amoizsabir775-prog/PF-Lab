#include <stdio.h>
#include <stdlib.h>

int containsDigit(char *str) {
    int j = 0;
    while (str[j] != '\0') {
        if (str[j] >= '0' && str[j] <= '9') {
            return 1;
        }
        j++;
    }
    return 0;
}

int main() {
    int i, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of usernames.\n");
        return 1;
    }

    char **username = (char **)malloc(n * sizeof(char *));
    if (username == NULL) {
        printf("Memory Allocation failed.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        username[i] = (char *)malloc(50 * sizeof(char));
        if (username[i] == NULL) {
            printf("Memory Allocation Failed For Username %d.\n", i + 1);
            return 1;
        }

        printf("Enter the user name %d: ", i + 1);
        scanf("%49s", username[i]);
    }

    for (i = 0; i < n; i++) {
        if (containsDigit(username[i]) == 1) {
            free(username[i]);
            username[i] = NULL;
        }
    }

    printf("\nValid usernames:\n");
    for (i = 0; i < n; i++) {
        if (username[i] != NULL) {
            printf("%s\n", username[i]);
            free(username[i]);
            username[i] = NULL;
        }
    }

    free(username);
    username = NULL;

    return 0;
}
