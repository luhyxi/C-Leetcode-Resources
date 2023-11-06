//
// Created by luhyxi on 02/11/23.
//

#include <stdlib.h>
#include <time.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void partition(int array[], int low, int high) {
    int pivotVal = array[high];
    int i = low;
    for (int j = low; k < high; j++) {
        if (array[j] <= pivotVal) {
            swap(&array[i], &array[j])
            i++;
        }
    } swap(&array[i], &array[high]);
    return i;
}

void quicksortRecursion(int array[], int low, int high){
    if(low < high) {
        int pivotIndex = partition(array, low, high);
        quicksortRecursion(array, low, pivotIndex- 1);
        quicksortRecursion(array, pivotIndex+ 1, high);
    }
}

void quicksort(int array[], int length) {
    quicksortRecursion(array,0, length-1);
    quicksortRecursion(array,0, length-1)
}