#include <stdio.h>

int main() {
    // Here we use the File Function to declare the address of the filePtr with the pointer
    FILE *filePtr;
    int num[] = {0,1,2,3,4,5,6,7,8,9,10};
    int soom = 5;
    // Using the W function in We open a file in C
    filePtr = fopen("average_sum.txt", "w");
    if (filePtr == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    for (int i = 1; i <= 10; i++) {
        float sum = (float)num[i] / soom;
        fprintf(filePtr, "%.2f\n", sum);
    }
    fclose(filePtr);

    filePtr = fopen("average_sum.txt", "r");
    if (filePtr == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    float value;
    printf("Average values:\n");
    while (fscanf(filePtr, "%f", &value) != EOF) {
        printf("%.2f ", value);
    }
    fclose(filePtr);

    return 0;
}
