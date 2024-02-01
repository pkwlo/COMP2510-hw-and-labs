#include <stdio.h>
void printTokens(char *inputString) {
    while (*inputString) {
        if (*inputString == ' ') {
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