#include <stdio.h>
#include <stdlib.h>
// Here we do declare the size of the Data_size
#define DATA_SIZE 1000
// the main function here will take the name, age and the salary
int main() {
    char name[50];
    int age;
    float salary;
// we use the to address the File for Null
    FILE *filePtr = NULL;
//  Here we use the f open to open a text file by the name of emp_records
    filePtr = fopen("emp_records.txt", "w");
// if the file address is Null, it will print out Error
    if (filePtr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
// here we use the printf function to and get to store the info of the user
    printf("Please enter the name of the employee: ");
    fgets(name, sizeof(name), stdin);
// and here the same where we ask the age of the employee
    printf("Please enter the age of the employee: ");
    scanf("%d", &age);

    printf("Please enter the salary of the employee: ");
    scanf("%f", &salary);

    fprintf(filePtr, "Name: %s", name);
    fprintf(filePtr, "Age: %d\n", age);
    fprintf(filePtr, "Salary: %.2f\n", salary);

    fclose(filePtr);

    printf("Employee records have been saved.\n");

    return 0;
}
