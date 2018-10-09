#include <iostream>
#include <stdio.h>
#include <math.h>
#include "MPointer.h"
#include "LinkedListDouble/LinkedListDouble.h"
using namespace std;

/* Function to sort a list of MPointer using insertion sort*/
template <class T>
void insertionSort(LinkedListDouble<T>* arr, int n){
    int i, j;
    int key;
    for (i = 1; i < n; i++){
        int k = arr->get(j)->operator&();
        key = k;
        j = i-1;
        /* Move elements of arr[0..i-1], that are
           greater than key, to one position ahead
           of their current position */
        while (j >= 0 && arr->get(j)->operator&() > key){
            T element = arr->get(j)->operator&();
            arr->setValue(element, j+1);
            j = j-1;
        }
        arr->setValue(key, j+1);
    }
}
///////////////////////////////////////////////////////////////////////////

template <class T>
// A function to implement bubble sort
void bubbleSort(LinkedListDouble<T>* arr, int n){
    int i, j;
    for (i = 0; i < n-1; i++)

        // Last i elements are already in place
        for (j = 0; j < n-i-1; j++){
            if (arr->get(j) > arr->get(j+1)){
                T m = arr->get(j);
                arr->setValue(arr->get(j+1), j);
                arr->setValue(m, j+1);
            }
        }
}

////////////////////////////////////////////////////////////////////////////////

/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    list, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
template <class T>
int partition (LinkedListDouble<T>* arr, int low, int high){
    T pivot = arr->get(high);    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++){
        // If current element is smaller than or
        // equal to pivot
        if (arr->get(j) <= pivot){
            i++;    // increment index of smaller element
            T m = arr->get(i);
            arr->setValue(arr->get(j), i);
            arr->setValue(m, j);
        }
    }
    T m = arr->get(i+1);
    arr->setValue(arr->get(high), i+1);
    arr->setValue(m, high);
    return (i + 1);
}

/* The main function that implements QuickSort
  low  --> Starting index,
  high  --> Ending index */
template <class T>
void quickSort(LinkedListDouble<T>* arr, int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr.get(p) is now
           at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
////////////////////////////////////////////////////////////////////////////////

int main()
{
    LinkedListDouble<MPointer<int>*>* l1 = new LinkedListDouble<MPointer<int>*>();
    cout << "lista "<< l1 << endl;
    MPointer<int>* mPtr5 = new MPointer<int>();
    cout << "mPtr5 " << mPtr5 << endl;
    mPtr5->setData(5);
    MPointer<int>* mPtr1 = new MPointer<int>();
    mPtr1->setData(1);
    MPointer<int>* mPtr16 = new MPointer<int>();
    mPtr16->setData(16);
    MPointer<int>* mPtr4 = new MPointer<int>();
    cout << "mPtr4 " << mPtr4 << endl;
    mPtr4->setData(4);
    cout << "mPtr16 "<<mPtr16 << endl;
    l1->add(mPtr5);
    cout << 4 << endl;
    l1->add(mPtr1);
    l1->add(mPtr16);
    l1->add(mPtr4);
    int n = l1->size;
    cout << n << endl;
    //l1->printList();
    insertionSort<MPointer<int>*>(l1, 11);
    quickSort<MPointer<int>*>(l1, 4, 11);
    bubbleSort<MPointer<int>*>(l1, 4);

    auto * list3 = new LinkedListDouble<int>();
    list3->add(45);
    list3->add(8);
    list3->add(-1);
    list3->add(2);
    list3->add(-34);
    list3->add(48274230);
    list3->printList();
    list3->remove(1);
    std::cout<<std::endl;
    list3->printList();


    return 0;
}