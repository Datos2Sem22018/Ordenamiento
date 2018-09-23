//
// Created by karla on 23/09/18.
//

#include "BubbleSort.h"
void BubbleSort::swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void BubbleSort::bubbleSort(int *arr, int n) {
    int i, j;
    for (i = 0; i < n-1; i++)

        // Last i elements are already in place
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
}