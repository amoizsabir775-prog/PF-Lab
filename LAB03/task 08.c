#include<stdio.h>
 int main()
 {
 
 
    char name[100];
	printf("Enter THe Full Name");
	scanf("%[^\n]", name);
	printf("Hello, :\n%s\n", name);
	return 0;
}
