//
// Created by karla on 23/09/18.
//

#ifndef ORDENAMIENTO_QUICKSORT_H
#define ORDENAMIENTO_QUICKSORT_H


class QuickSort {
public:
    void quickSort(int arr[], int low, int high);

private:
    void swapQ(int* a, int* b);
    int partition (int arr[], int low, int high);

};


#endif //ORDENAMIENTO_QUICKSORT_H
