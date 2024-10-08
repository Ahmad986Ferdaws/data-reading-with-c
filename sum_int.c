#include <stdio.h>

int main() {
    // Here we use the File Function to declare the address of the filePtr with the pointer
    FILE *filePtr;
    int num[] = {0,1,2,3,4,5,6,7,8,9,10};
    int soom = 5;
    // Using the W function in We open a file in C
    filePtr = fopen("average_sum.txt", "w");
    // here we declare that if the program couldnt open the file because the path is invalid, it will return error
    if (filePtr == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    // Here we iretate through the array and devide the total of it by 5
    for (int i = 1; i <= 10; i++) {
        float sum = (float)num[i] / soom;
        fprintf(filePtr, "%.2f\n", sum);
    }
    // we close the file
    fclose(filePtr);
    // Same as before if the file cannot Read it, it will return invalid
    filePtr = fopen("average_sum.txt", "r");
    // also the same for the reading the file
    if (filePtr == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    // and also this will be 
    float value;
    printf("Average values:\n");
    while (fscanf(filePtr, "%f", &value) != EOF) {
        printf("%.2f ", value);
    }
    // and at the end we will use the fclose fucntion to  close the fucntion
    fclose(filePtr);

    return 0;
}
