#include <stdio.h>
#include <math.h>

void baseConverter(char *fileName) {
    FILE *file;
    int row;
    int col;

    file = fopen(fileName, "r");
    if (file == NULL) {
        printf("Error opening file %s.\n", fileName);
        return;
    }

    fscanf(file,"%d %d", &row, &col);

    for (int i = 0; i < row; ++i) {
        int decimal = 0;
        for (int j = 0; j < col; ++j) {
            int number;
            fscanf(file, "%d", &number);
            decimal += number * pow(2, (col - j -1));
        }
        printf("%d\n", decimal);
    }
    fclose(file);
}
int main() {
    char fileName[100];
    printf("Please enter the source file name:");
    scanf("%s", fileName);
    baseConverter(fileName);
    return 0;
}