/*
#include <stdio.h>

// Write a function in C that finds the maximum value in an array.
void findMaximum (const int array[], int size){
    if (size == 0){
        printf("Array must not be empty.");
    }
    else {
        int largestNumber = array[0];
        for (int index = 0; index < size; index++){
            if (array[index] > largestNumber){
                largestNumber = array[index];
            }
        }
        printf("The maximum is: %d\n", largestNumber);
    }
}

int main() {
    int testArray[] = {8, 2, 1, 10};
    int size = sizeof(testArray) / sizeof(testArray[0]);
    findMaximum(testArray, size);
    return 0;
}*/
