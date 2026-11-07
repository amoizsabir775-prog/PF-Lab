#include <stdio.h>
#include <string.h>

int main() {
    char feedback[300];
    
    printf("Enter customer feedback: ");
    fgets(feedback, sizeof(feedback), stdin);
    
    size_t len = strlen(feedback);
    if (len > 0 && feedback[len - 1] == '\n') {
        feedback[len - 1] = '\0';
        len--;
    }
    
    printf("Total characters: %zu\n", len);
    
    if (strstr(feedback, "good") != NULL) {
        printf("Sentiment Report: Positive (contains 'good')\n");
    } else if (strstr(feedback, "bad") != NULL) {
        printf("Sentiment Report: Negative (contains 'bad')\n");
    } else {
        printf("Sentiment Report: Neutral\n");
    }
    
    char *pos = strstr(feedback, "bad");
    if (pos != NULL) {
        char temp[300];
        strcpy(temp, pos + 3);
        strcpy(pos, "not good");
        strcat(feedback, temp);
    }
    
    printf("Sanitized feedback: %s\n", feedback);
    
    return 0;
}
