#include <stdio.h>

int digitSum(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + digitSum(n / 10);
}

int calculateChecksum(int transactionID) {
    if (transactionID < 10) {
        return transactionID;
    }
    return calculateChecksum(digitSum(transactionID));
}

int main() {
    int transactionID;

    printf("Enter transaction ID: ");
    scanf("%d", &transactionID);

    int result = calculateChecksum(transactionID);
    printf("The checksum is %d\n", result);

    return 0;
}
