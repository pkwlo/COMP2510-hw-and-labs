#include <stdio.h>

int getOddPositionedDigits(int number) {
    if (number == 0) {
        return number;
    } else {
        return getOddPositionedDigits(number/100)*10 + number%10;
    }
}

int main() {
    int number = 89201;
    printf("%d", getOddPositionedDigits(number));
    return 0;
}
