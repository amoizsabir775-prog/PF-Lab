#include<stdio.h>

int add(int a, int b);
int multiply(int a, int b);
int findMax(int a, int b);
int compute(int a, int b, int (*op)(int, int));

int main(){
    int a, b;
    printf("Enter the Value for a & b");
    scanf("%d", &a);
    scanf("%d", &b);
    
    int sum = compute(a, b, add);
    int product = compute(a, b, multiply);
    int maximum = compute(a, b, findMax);
    
    printf("THE addition is %d\n", sum);
    printf("The multiplication is %d\n", product);
    printf("The maximum value is %d\n", maximum);
}

int add(int a, int b){
    return a + b;
}

int multiply(int a, int b){
    return a * b;
}

int findMax(int a, int b) {
    return (a > b) ? a : b;
}

int compute(int a, int b, int (*op)(int, int)) {
    return op(a, b);
}
