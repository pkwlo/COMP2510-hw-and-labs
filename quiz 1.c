#include <stdio.h>

int difference(int firstArray[], int firstSize, int secondArray[], int secondSize) {
    int differences = 0;
    if (firstSize > secondSize) {
        for (int index = 0; index < firstSize; index++)
            if (firstArray[index] != secondArray[index]) {
                differences += 1;
        }
    } else {
        for (int secondIndex = 0; secondIndex < secondSize; secondIndex++) {
            if (secondArray[secondIndex] != firstArray[secondIndex]) {
                differences += 1;
                }
        }
    }
    return differences;
}

int main() {
    int firstArray[] = {1, 9, 6};
    int firstSize = sizeof firstArray / sizeof firstArray[0];
    int secondArray[] = {2, 7, 1, 10};
    int secondSize = sizeof secondArray / sizeof secondArray[0];

    int differenceInNumbers = difference(firstArray, firstSize, secondArray, secondSize);
    printf("The number of differences is: %d\n", differenceInNumbers);
    return 0;
}
