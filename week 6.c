#include <stdio.h>

// write a recursive function to check if all the characters of a string are uppercase.
// Assume the string only includes alphabets and blank characters

int checkIfAlpha(char *str) {
    // base case: an empty string is considered to be all uppercase
    if (*str == '\0') {
        return 1;
    }

    // check if the current character is uppercase
    if (*str >= 'A' && *str <= 'Z') {
        // recursively check the rest of the string
        return checkIfAlpha(str+1);
    }
    return 0;
}

// write a code to check whether a number is a power of 2 using bitwise operator
int isPowerOfTwo(int n){
    if ((n - 1 & n) == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
//    char aString[] = "TEST";
//    int result = checkIfAlpha(aString);
    int n = 4;
    int result = isPowerOfTwo(n);
    if (result == 1) {
        printf("The string is all uppercase.");
    } else {
        printf("The string is not all uppercase.");
    }
    return 0;
}