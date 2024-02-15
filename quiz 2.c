#include <stdio.h>
// Write a program that takes 2 arrays of the same size and creates another array of the same size which elements are
// the elements of the first array minus the elements of the second array and the same index.
int* subtractArray(const int* firstArray, const int* secondArray, int size) {
    static int result[sizeof(size)];
    for (int i = 0; i < size; i++) {
        result[i] = firstArray[i] - secondArray[i];
    }
    return result;
}

int main() {
    int firstArray[] = {1, 2, 3, 4, 5};
    int secondArray[] = {4, 3, 2, 1, 5};
    int size = 5;
    int *result = subtractArray(firstArray, secondArray, size);
    for (int i = 0; i < size; i++) {
        printf( "%d\n", result[i]);
    }
    return 0;
}