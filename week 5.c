#include <stdio.h>
#include <stdbool.h>

// Write a recursive function for multiplying two integers
int product(int a, int b) {
    if (a < b) { // optimize to get to the base case faster if a is less than b, you will do less calculations this way
        return product(b, a);
    } else if (b == 0) {
        return 0;
    } else {
        return a + product(a, b-1);
    }
}

// Write a recursive function to check if the sum of the array is the same as a number
bool isSumOfArrayElementsEqualTo(int elements[], int size, int sum) {
    if (size == 0) {
        return sum;
    }
// Another way to do the base case:
//    if (size == 1) {
//        return elements[0] == sum;
//    }
    return isSumOfArrayElementsEqualTo(elements, size-1, sum - elements[size-1]);
}

int main() {
//    printf("%d", product(5, 10));
    int elements[] = {1, 2, 3, 4, 5};
    int size = sizeof(elements) / sizeof(elements[0]);
    int sum = 15;
    if (isSumOfArrayElementsEqualTo(elements, size, sum) == 0) {
        printf("True");
    } else {
        printf("False");
    }
    return 0;
}