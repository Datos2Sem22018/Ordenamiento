#include <iostream>
#include <stdio.h>
#include <math.h>
#include "LinkedListDouble/LinkedListDouble.h"
using namespace std;

/* Function to sort a list of MPointer using insertion sort*/
template <class T>
void insertionSort(LinkedListDouble<T>* arr, int n){
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

    auto * list = new LinkedListDouble<string>();
    list->add("mariano");
    list->add("daniel");
    list->add("karla");
    list->add("alejandro");
    cout << list->size << endl;

    list->printList();
    std::cout<<std::endl;
    int j = list->size;
    quickSort(list, 0, j-1);
    std::cout<<"quickSort"<< std::endl;
    list->printList();
    std::cout<<std::endl;
    std::cout<<"desp quickSort\n"<< std::endl;
    std::cout<<std::endl;


    auto * list2 = new LinkedListDouble<double>();
    list2->add(4.5);
    list2->add(4.0);
    list2->add(6.9);
    list2->add(7.4);
    list2->add(10.8);
    list2->add(45.2);
    list2->printList();
    std::cout<<std::endl;
    int l = list2->size;

    insertionSort(list2, l);
    std::cout<<"insertionSort"<< std::endl;
    list2->printList();
    std::cout<<std::endl;
    std::cout<<"desp insertionSort\n"<< std::endl;
    std::cout<<std::endl;

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
    std::cout<<std::endl;
    int p = list->size;
    bubbleSort(list3, p);
    std::cout<<"bubbleSort"<< std::endl;
    list3->printList();
    std::cout<<std::endl;
    std::cout<<"desp bubbleSort\n"<< std::endl;
    std::cout<<std::endl;


    return 0;
}