#include <stdio.h>
#include <string.h>

void printReversedTokens(char *inputString, int strLen) {
    int i, j;
    char temp;
    for (i = 0, j = strLen - 1; i < j; i++, j--) {
        temp = inputString[i];
        inputString[i] = inputString[j];
        inputString[j] = temp;
    }
    for (int k = 0; k < strLen; ++k) {
        if (inputString[k] != ' ') {
            printf("%c", inputString[k]);
        } else {
            if (inputString[k+1] != ' '){
                printf("\n");
            }
        }
    }
}

int main() {
    char inputString[] = "Hi   there!  How is  it  going?  ";
    int strLen = strlen(inputString);
    printReversedTokens(inputString, strLen);
    return 0;
}
