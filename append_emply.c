#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[50], address[100], phone_num[15];
    int age, employee_ID;
    float salary;

    FILE *filePtr = NULL;

    filePtr = fopen("emp_records.txt", "a");
    
    if (filePtr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Please enter the name of the employee: ");
    fgets(name, sizeof(name), stdin);

    printf("Please enter the age of the employee: ");
    scanf("%d", &age);

    printf("Please enter the salary of the employee: ");
    scanf("%f", &salary);

    printf("Please enter the employee ID: ");
    scanf("%d", &employee_ID);
    getchar();  // Clear newline character from buffer

    printf("Please enter the address of the employee: ");
    fgets(address, sizeof(address), stdin);

    printf("Please enter the phone number of the employee: ");
    fgets(phone_num, sizeof(phone_num), stdin);

    fprintf(filePtr, "Name: %s", name);
    fprintf(filePtr, "Age: %d\n", age);
    fprintf(filePtr, "Salary: %.2f\n", salary);
    fprintf(filePtr, "Employee ID: %d\n", employee_ID);
    fprintf(filePtr, "Address: %s", address);
    fprintf(filePtr, "Phone Number: %s\n", phone_num);

    fclose(filePtr);

    printf("Additional employee information has been saved.\n");

    return 0;
}
