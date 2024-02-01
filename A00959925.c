#include <stdio.h>
int* twoSum(const int* nums, int numsSize, int target) {
    static int result[2];
    for (int index = 0; index < numsSize; index++) {
        for (int counter = index + 1; counter < numsSize; counter++) {
            if (nums[index] + nums[counter] == target) {
                result[0] = index;
                result[1] = counter;
            }
        }
    }
    return result;
}

int main() {
    int numsSize;
    printf("How many numbers do you want in the list: \n");
    scanf("%d", &numsSize);

    int nums[numsSize];
    for (int index =0; index < numsSize; index++) {
        printf("Add a number to the list: \n");
        scanf("%d", &nums[index]);

    }

    int target;
    printf("What should 2 values in the array add up to?\n");
    scanf("%d", &target);

    int* result = twoSum(nums, numsSize, target);
    if (result[0] != 0 && result[1] != 0){
        printf("The numbers that add up to %d are at indices: ", target);
        for (int index = 0; index < 2; index++){
            printf("%d ", result[index]);
        }
        return 0;
    } else {
        printf("There are no matches.");
        return -1;
    }
}