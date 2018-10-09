#include <iostream>
#include <stdio.h>
#include <math.h>
#include <thread>
#include <unistd.h>
#include "MPointer.h"
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
    MPointerGC* mPointerGC = MPointerGC::getInstance();
    thread t1(mPointerGC->executeMPGC);
    auto* list = new LinkedListDouble<int >();
    MPointer<int>* myPtr = new MPointer<int>();
    *myPtr = 5;

    cout << "Memory addresses: " << endl;
    cout << &myPtr << endl;
    MPointer<int>* myPtr2 = new MPointer<int>();
    *myPtr2 = -1;
    cout << &myPtr2 << endl;
    MPointer<int>* myPtr3 = new MPointer<int>();
    *myPtr3 = 15;
    cout << &myPtr3 << endl;
    MPointer<int>* myPtr4 = myPtr;
    cout << &myPtr4 << endl;

    cout << "Garbage Collector MPointer list: " << flush;
    mPointerGC->listMemory.printList();

    cout << "Garbage Collector IDs list: " << flush;
    mPointerGC->listID.printList();


    list->add(&(*myPtr3));
    list->add(&(*myPtr));
    list->add(&(*myPtr2));
    list->add(&(*myPtr4));

    list->printList();
    std::cout<<std::endl;
    int j = list->size;
    quickSort(list, 0, j-1);
    std::cout<<"quickSort"<< std::endl;
    list->printList();
    std::cout<<std::endl;
    std::cout<<"after quickSort\n"<< std::endl;
    std::cout<<std::endl;

    auto* list2 = new LinkedListDouble<int >();
    list2->add(&(*myPtr3));
    list2->add(&(*myPtr));
    list2->add(&(*myPtr2));
    list2->add(&(*myPtr4));
    int l = list2->size;
    insertionSort(list2, l);
    std::cout<<"insertionSort"<< std::endl;
    list->printList();
    std::cout<<std::endl;
    std::cout<<"after insertionSort\n"<< std::endl;
    std::cout<<std::endl;

    auto * list3 = new LinkedListDouble<int>();
    list3->add(&(*myPtr3));
    list3->add(&(*myPtr));
    list3->add(&(*myPtr2));
    list3->add(&(*myPtr4));
    std::cout<<std::endl;
    list3->printList();
    std::cout<<std::endl;
    int p = list3->size;
    bubbleSort(list3, p);
    std::cout<<"bubbleSort"<< std::endl;
    list3->printList();
    std::cout<<std::endl;
    std::cout<<"after bubbleSort\n"<< std::endl;
    std::cout<<std::endl;
    for(int i=0; i<15 ; i++){
        cout<<"Desde el main"<<endl;
        usleep(1000000);
    }
    t1.join();


    return 0;
}