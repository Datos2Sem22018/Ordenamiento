//
// Created by karla on 23/09/18.
//

#ifndef ORDENAMIENTO_NODE_H
#define ORDENAMIENTO_NODE_H

#include <iostream>

template <class T>
class Node {
public:
    T data;
    Node* next;
    Node<T> (T var);
};

template <class T>
Node<T>::Node(T var) {
    this->data = var;
    this->next = nullptr;
}




#endif //ORDENAMIENTO_NODE_H
