#include <stdio.h>
#include <ctype.h>
// so this is one of the important projects
int main() {
    // in this part we use the to point out the address of the file
    FILE *filePtr;
    char ch;

    filePtr = fopen("alphabet.txt", "w");
    if (filePtr == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    for (ch = 'A'; ch <= 'Z'; ch++) {
        fputc(ch, filePtr);
    }
    fclose(filePtr);

    filePtr = fopen("alphabet.txt", "r");
    if (filePtr == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("Characters in lowercase:\n");
    while ((ch = fgetc(filePtr)) != EOF) {
        printf("%c ", tolower(ch));
    }
    fclose(filePtr);

    return 0;
}
