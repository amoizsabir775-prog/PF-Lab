#include <stdio.h>
#include <string.h>

struct PatientInfo {
    int patientID;
    char name[40];
    int age;
};

struct HospitalRecord {
    int admissionID;
    char ward[30];
    struct PatientInfo patient;
};

int main() {
    struct HospitalRecord record = {501, "Emergency", {102, "Ali", 24}};
    struct HospitalRecord *ptr = &record;

    strcpy(ptr->ward, "ICU");
    ptr->patient.age = 25;

    printf("Admission ID: %d\n", ptr->admissionID);
    printf("Ward: %s\n", ptr->ward);
    printf("Patient ID: %d\n", ptr->patient.patientID);
    printf("Patient Name: %s\n", ptr->patient.name);
    printf("Patient Age: %d\n", ptr->patient.age);

    return 0;
}
