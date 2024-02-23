#include <stdio.h>
// Write a C program that makes a copy of a file.
// your program should prompt the user to enter the name of the source
// (existing file) and the destination file.

int copyFile(char *sampleFile, char *destinationFile) {
    char content[1000];
    int index = 0;
    FILE *sample;
    sample = fopen(sampleFile, "r");
    if (sample == NULL) {
        printf("The file cannot be found.\n");
        return 1;
    }
    char currentChar;
    while ((currentChar = fgetc(sample)) != EOF) {
        content[index] = currentChar;
        index++;
    }

    FILE *destination;
    destination = fopen(destinationFile, "w");
    fprintf(destination, "%s", content);

    fclose(sample);
    fclose(destination);
    printf("The file sample.txt copied successfully in the file sample2.txt.");
    return 0;
}

int main() {
    char sampleFile[100];
    char destinationFile[100];
    printf("Please enter the source file name: ");
    scanf("%s", sampleFile);

    printf("Please enter the destination file name: ");
    scanf("%s", destinationFile);

    copyFile(sampleFile, destinationFile);
    return 0;
}