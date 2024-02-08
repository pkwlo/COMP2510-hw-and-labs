#include <stdio.h>
#include <strings.h>
#include <ctype.h>

// Write a program that asks the user to enter their full name and then reads the name as input and separates the full
// name into first and last name, then constructs and displays a message that greets the user using their first name
void printName() {
    char firstName[20];
    char lastName[20];
    printf("Please enter your full name: ");
    scanf("%s %s", firstName, lastName);
    printf("Hello, %s %s\n", firstName, lastName);
}

// Implement a program that searches for a specific element in an array and displays its index if found
void searchElement(const int integerArray[], int size, int search) {
    for(int index = 0; index < size; index++) {
        if (integerArray[index] == search) {
            printf("The index of %d is: %d\n", search, index);
            break;
        } else if (index == size - 1) {
            printf("The number is not in this array.\n");
        }
    }
}

// Create a program that reverse the order of elements in an array
void reverseArray(int integerArray[], int size) {
    int reversedArray[size];
    int newIndex = 0;
    for (int index = size - 1; index >= 0; index--) {
        reversedArray[newIndex] = integerArray[index];
        newIndex++;
    }
    for (int index = 0; index < size; index++) {
        printf("%d", reversedArray[index]);
    }
}

// Implement a program that removes duplicate elements from an array, preserving the order of the remaining elements
void removeDuplicates(int integerArray[], int size) {
    int anotherArray[size];
    int anotherArrayIndex = 0;

    for (int index = 0; index < size; index++) {
        int isDuplicate = 0;
        for (int indexTwo = 0; indexTwo < anotherArrayIndex; indexTwo++) {
            if (integerArray[index] == anotherArray[indexTwo]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            anotherArray[anotherArrayIndex] = integerArray[index];
            anotherArrayIndex++;
        }
    }

    printf("Array after removing duplicates:\n");
    for (int index = 0; index < anotherArrayIndex; index++) {
        printf("%d ", anotherArray[index]);
    }
}

// Write a program that finds and displays the second-largest element in an array
void secondLargestElement(int integerArray[], int size) {
    int largestElement = integerArray[0];
    int secondLargest = integerArray[0];
    for (int index = 0; index < size; index++) {
        if (integerArray[index] > largestElement) {
            largestElement = integerArray[index];
        }
    }
    for (int index = 0; index < size; index++) {
        if (integerArray[index] > secondLargest && integerArray[index] < largestElement) {
            secondLargest = integerArray[index];
        }
    }
    printf("The second largest element is: %d\n", secondLargest);
}

// Write a program that counts the number of vowels (A, E, I, O, U) in a given string
void vowelCounter(char aString[]) {
    int counter = 0;
    for (int index = 0; index < strlen(aString) - 1; index++) {
        if (toupper(aString[index]) == 'A' ||
        toupper(aString[index]) == 'E' ||
        toupper(aString[index]) == 'I' ||
        toupper(aString[index]) == 'O' ||
        toupper(aString[index]) == 'U') {
            counter++;
        }
    }
    printf("There are %d vowels in this sentence.", counter);
}

int main() {
    int integerArray[] = {1, 2, 3, 4, 5, 5, 6, 3};
    int sizeInt = sizeof integerArray / sizeof integerArray[0];
//    printName();
//
//    char aString[] = "How many cats are in Turkey?";
//    vowelCounter(aString);
//    removeDuplicates(integerArray, sizeInt);
    reverseArray(integerArray, sizeInt);
    return 0;
}