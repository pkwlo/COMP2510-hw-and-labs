#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// Write a program to count the number of words in a string
int countWords(char *input) {
    int result = 0;
    int i = 0, len = strlen(input);
    while (i<len && input[i] == ' '){
        i++;
    }
    for(;i<len;i++){
        if (input[i]==' ') {
            result++;
            while (i<len && input[i]==' '){
                i++;
            }
        }
    }
    if (i == len && input[i-1] != ' ') {
        result++;
    }
    return result;
}

// Write a program that takes a number from a user and stores in hte file test.txt
void createFile(char *fileName, char *content) {
    FILE *file;
    file = fopen(fileName, "w");
    fprintf(file, "%s", content);
    fclose(file);
}

// Write a program that finds the number of lines in a text file using fgetc(). User should be prompted to enter the
// name of the file they want to count the lines of.
int numberOfLines(char *fileName) {
    FILE *file;
    int lines = 0;
    file = fopen(fileName, "r");
    if (file == NULL) {
        printf("Could not open the file for reading.");
        return 0;
    }
    while(fgetc(file) != EOF) {
        if (fgetc(file) == '\n') {
            lines++;
        }
    }
    fclose(file);
    return lines;
}

// Write a program that reads file.txt one line at a time and checks whether the sum of the first 2 numbers
// is equal to the third
int sumTrue (char *fileName) {
    FILE *file;
    char line[100];
    int num1, num2, num3;
    while (fgets(line, sizeof(line), file) != NULL) {
        if (sscanf(line, "%d %d %d", &num1, &num2, &num3) == 3) {
            if (num1 + num2 == num3) {
                printf("%d + %d = %d\n", num1, num2, num3);
            } else {
                printf("%d + %d != %d\n", num1, num2, num3);
            }
        } else {
            printf("Invalid line format: %s\n", line);
        }
    }

    fclose(file);
    return 0;
}

int main() {
//    char input[] = "Hello World";
//    int result = countWords(input);
//    printf("%d", result);

//    char content[100];
//    printf("Enter a number for the file: \n");
//    scanf("%s", content);
//    createFile("test.txt", content);
//    printf("Number stored successfully");

//    char fileName[100];
//    printf("Enter the file name you want to read: \n");
//    scanf("%s", fileName);
//    printf("The number of lines in %s is %d.\n", fileName, numberOfLines(fileName));
    return 0;
}