#include <stdio.h>
#include <string.h>
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

int main() {
    char input[] = "Hello World";
    int result = countWords(input);
    printf("%d", result);
    return 0;
}