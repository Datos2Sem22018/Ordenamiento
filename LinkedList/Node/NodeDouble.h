//
// Created by karla on 24/09/18.
//

#ifndef ORDENAMIENTO_NODEDOUBLE_H
#define ORDENAMIENTO_NODEDOUBLE_H


#include <iostream>

template <class T>
class NodeDouble {
public:
    T data;
    NodeDouble* previous;
    NodeDouble* next;
    NodeDouble<T> (T var);
};

template <class T>
NodeDouble<T>::NodeDouble(T var) {
    this->data = var;
    this->next = nullptr;
    this->previous = nullptr;
}




#endif //ORDENAMIENTO_NODEDOUBLE_H
