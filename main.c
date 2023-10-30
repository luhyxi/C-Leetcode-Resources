#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* frequencySort(int* nums, int numsSize, int* returnSize){
    int* returnArray = (int*) malloc(numsSize*sizeof (int )); // Alocação de memória dentro do array

    if (returnArray == NULL){return 0;}

    for (int i = 0; i < numsSize - 1; ++i) {
        for (int j = 0; j < numsSize - i - 1; ++j) {

        }
        int temp = nums[i];
        int tempFreq = 0;
        (temp == nums[i+1]) ? tempFreq++ : tempFreq;
    }
}

