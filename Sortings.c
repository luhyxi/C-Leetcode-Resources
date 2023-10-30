//
// Created by luhyxi on 29/10/23.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void sort(int array[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if(array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
char *restoreString(char *s, int *indices, int indicesSize) {
    char *newStr = (char *)malloc((indicesSize + 1) * sizeof(char));

    for (int i = 0; i < indicesSize; ++i) {
        newStr[indices[i]] = s[i];
    }

    newStr[indicesSize] = '\0';  // Null-terminate the new string.

    return newStr;
}
