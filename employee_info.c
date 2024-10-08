#include <stdio.h>
#include <stdlib.h>
// Here we do declare the size of the Data_size
#define DATA_SIZE 1000

int main() {
    char name[50];
    int age;
    float salary;

    FILE *filePtr = NULL;

    filePtr = fopen("emp_records.txt", "w");

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

    fprintf(filePtr, "Name: %s", name);
    fprintf(filePtr, "Age: %d\n", age);
    fprintf(filePtr, "Salary: %.2f\n", salary);

    fclose(filePtr);

    printf("Employee records have been saved.\n");

    return 0;
}
