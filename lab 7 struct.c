#include <stdio.h>

struct student {
    char name[20];
    float gpa;
};

int main() {
    char filename[100];
    printf("Please enter the source file name:");
    scanf("%s", filename);
    getchar();

    FILE *file = fopen(filename, "r");
    struct student st[100];
    int count = 0;

    while (fscanf(file, "%s %f", st[count].name, &st[count].gpa) == 2) {
        count++;
    }
    fclose(file);

    printf("Students with GPA greater than 3.9:\n");
    for (int i = 0; i < count; i++) {
        if (st[i].gpa > 3.91) {
            printf("%s\n", st[i].name);
        }
    }

    return 0;
}