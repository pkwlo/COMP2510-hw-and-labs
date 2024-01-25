//#include <stdio.h>
//
//// implement a function that searches for a specific element in an integer array and prints its index if found or
//// a message if not found
//void searchElement(int integerArray[], int size, int search) {
//    for(int index = 0; index < size; index++) {
//        if (integerArray[index] == search) {
//            printf("The index of %d is: %d\n", search, index);
//            break;
//        } else if (index == size - 1) {
//            printf("The number is not in this array.\n");
//        }
//    }
//}
//
//// create a program that counts and prints the number of even and odd elements in an integer array
//void evenOddCounter(int integerArray[], int size) {
//    int odd = 0;
//    int even = 0;
//    for (int index = 0; index < size; index++) {
//        if (integerArray[index]%2 == 0) {
//            odd += 1;
//        }
//        else {
//            even += 1;
//        }
//    }
//    printf("The number of odd elements are: %d\nThe number of even elements are: %d\n", odd, even);
//}
//
//// implement a function to reverse the elements of an integer array in place
//void reverseArray(int integerArray[], int size) {
//    int newIndex = 0;
//    int newSize = size;
//    while (newIndex < newSize) {
//        int temp = integerArray[newIndex];
//        integerArray[newIndex] = integerArray[newSize-1];
//        integerArray[newSize-1] = temp;
//        newIndex++;
//        newSize--;
//    }
//    printf("The reversed array is: ");
//    for (int index = 0; index < size; index++) {
//        printf("%d ", integerArray[index]);
//    }
//}
//
//// write a program to find and print the second-largest element in a given integer array
//void secondLargestElement(int integerArray[], int size) {
//    int largestElement = integerArray[0];
//    int secondLargest = integerArray[0];
//    for (int index = 0; index < size; index++) {
//        if (integerArray[index] > largestElement) {
//            largestElement = integerArray[index];
//        }
//    }
//    for (int index = 0; index < size; index++) {
//        if (integerArray[index] > secondLargest && integerArray[index] < largestElement) {
//            secondLargest = integerArray[index];
//        }
//    }
//    printf("The second largest element is: %d\n", secondLargest);
//}
//
//// develop a program to calculate and display the average of elements in a floating-point array
//void arrayAverage(double floatArray[], int size) {
//    double sum = 0;
//    for(int index = 0; index < size; index++) {
//        sum += floatArray[index];
//    }
//    printf("The average is: %.1f\n", sum/size);
//}
//
//// create a function that rotates the elements of an integer array to the right by a specified number of positions
//void arrayRotation(int integerArray[], int size, int rotation) {
//    int newArray[size];
//
////    for (int index = 0; index < size; index++) {
////        if (index + rotation > size - 1) {
////            newArray[index - rotation] = integerArray[index];
////        } else {
////            newArray[index + rotation] = integerArray[index];
////        }
////    }
//    for (int index = 0; index < size; index++) {
//        // Calculate the new index after rotation
//        int newIndex = (index + rotation) % size;
//
//        // Assign the element to the new index
//        newArray[newIndex] = integerArray[index];
//    }
//
//    printf("The new array is: ");
//    for (int index = 0; index < size; index++) {
//        printf("%d ", newArray[index]);
//    }
//}
//
//int main() {
//    int integerArray[] = {1, 2, 3, 4, 5};
//    int sizeInt = sizeof integerArray / sizeof integerArray[0];
//    int searchFor = 10;
//    int rotation = 3;
////    searchElement(integerArray, sizeInt, searchFor);
////    evenOddCounter(integerArray, sizeInt);
////    reverseArray(integerArray, sizeInt);
////    secondLargestElement(integerArray, sizeInt);
//    arrayRotation(integerArray, sizeInt, rotation);
//
//    double floatArray[] = {1.5, 2.5, 3.8};
//    int sizeFloat = sizeof floatArray / sizeof floatArray[0];
////    arrayAverage(floatArray, sizeFloat);
//    return 0;
//}