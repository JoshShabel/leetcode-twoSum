#include <iostream>



/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <string.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
    *returnSize = 2;
    int *answerpointer = (int *) malloc(2 * (sizeof(int)));

    for (int x = 0; x < (numsSize); x++) {
        for (int y = 0; y < (numsSize); y++) {
            if (nums[x] + nums[y] == target) {
                answerpointer[0] = x;
                answerpointer[1] = y;


                //        printf("%u\n", numarray[x]);
            }
        }
    }

    return (answerpointer);
}


int main() {
    int *answerpointer = (int *) malloc(4 * (sizeof(int)));
    answerpointer[0] = 2;
    answerpointer[1] = 7;
    answerpointer[2] = 11;
    answerpointer[3] = 15;
    int *returnSize = (int *) malloc(1 * (sizeof(int)));
    returnSize[0] = 0;
    answerpointer = twoSum(answerpointer, 4, 9, returnSize);
    printf("%d", answerpointer[0]);
    return 0;
}


