#include <stdio.h>
void printTokens(char *inputString) {
    char space[] = " ";
    while (*inputString) {
        if (*inputString == space[0]) {
            printf("\n");
        } else {
            printf("%c", *inputString);
        }
        inputString++;
    }
}

int main() {
    char inputString[] = "Hi there! How is it going?";
    printTokens(inputString);
    return 0;
}