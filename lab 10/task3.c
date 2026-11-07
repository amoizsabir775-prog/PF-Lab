#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    char domain[50];
    
    printf("Enter employee email address: ");
    scanf("%s", email);
    
    char *atSymbol = strchr(email, '@');
    
    if (atSymbol == NULL) {
        printf("Invalid Email Format\n");
    } else {
        strcpy(domain, atSymbol + 1);
        printf("Extracted Domain: %s\n", domain);
    }
    
    return 0;
}
