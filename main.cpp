#include <iostream>
#include <stdio.h>
#include <math.h>
#include "LinkedList/LinkedList.h"
using namespace std;
/* Function to sort an array using insertion sort*/
template <class T>
void insertionSort(LinkedList<T>* arr, int n){
    int i, j;
    T key;
    for (i = 1; i < n; i++){
        key = arr->get(i);
        j = i-1;
        /* Move elements of arr[0..i-1], that are
           greater than key, to one position ahead
           of their current position */
        while (j >= 0 && arr->get(j) > key){
            T element = arr->get(j);
            arr->setValue(element, j+1);
            j = j-1;
        }
        arr->setValue(key, j+1);
    }
}
///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////
template <class T>
void swap(T *xp, T *yp)
{
    T temp = *xp;
    *xp = *yp;
    *yp = temp;
}
template <class T>
// A function to implement bubble sort
void bubbleSort(LinkedList<T>* arr, int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)

        // Last i elements are already in place
        for (j = 0; j < n-i-1; j++)
            if (arr->get(j) > arr->get(j+1))
                swap(&arr->get(j), &arr->get(j+1));
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void swapQ(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swapQ(&arr[i], &arr[j]);
        }
    }
    swapQ(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////



// A utility function to print an array of size n
void printArray(int arr[], int n)
{
    int i;
    for (i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

/* Driver program to test insertion sort */
int main()
{
    int arrI[] = {12, 11, 13, 5, 6};
    int arrQ[] = {14, 1, 13, 8, 6};
    int arrB[] = {17, 10, 11, 5, 3};
    auto * list = new LinkedList<string>();
    list->add("m");
    list->add("a");
    list->add("j");
    list->printList();
    cout << list->size << endl;

    int n = sizeof(arrI)/sizeof(arrI[0]);
    //printArray(arrI, n);
    list->printList();
    std::cout<<std::endl;
    int j = list->size;
    bubbleSort(list, j);
    list->printList();
    //printArray(arrI, n);
    std::cout<<std::endl;

    int m = sizeof(arrQ)/sizeof(arrQ[0]);
    printArray(arrQ, m);
    //insertionSort(arrQ, m);
    printArray(arrQ, m);
    std::cout<<std::endl;

    int a = sizeof(arrB)/sizeof(arrB[0]);
    printArray(arrB, a);
    //insertionSort(arrB, a);
    printArray(arrB, a);
    std::cout<<std::endl;


    return 0;
}