#include<stdio.h>
#include<stdlib.h>
struct Address {
	char city[50];
	int zip_code;
	char state[50];
};
struct student {
	int roll_no;
	float CGPA;
	char name[50];
	struct Address studentAddress;
} ;

int main(){
struct student student1 = {1, 0.34, "moiz" ,{"Karachi", 7500, "pak"}};
struct student student2 = {2, 0.34, "sabir" ,{"tando", 7600, "us"}};	
printf("Roll No: %d\n", student1.roll_no);
    printf("Name: %s\n", student1.name);
    printf("CGPA: %.2f\n", student1.CGPA);
    printf("City: %s\n", student1.studentAddress.city);
    printf("ZipCode: %d\n", student1.studentAddress.zip_code);
    printf("State: %s\n", student1.studentAddress.state);
    
    
    return 0;
	
}
