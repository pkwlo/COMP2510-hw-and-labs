#include <stdio.h>

int* getIntegerArray(int size)
{
    static int array[10];
    for (int i = 0; i < size; i++) {
        array[i] = i;
    }
    return array;
}
int main()
{
    int* returnedArray = getIntegerArray(5);
    for (int i = 0; i < 5; i++) {
        printf("%d ", returnedArray[i]);
    }
    return 0;
}