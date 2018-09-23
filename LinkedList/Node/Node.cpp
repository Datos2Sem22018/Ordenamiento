//
// Created by karla on 23/09/18.
//

#include "Node.h"
template <class T>
Node<T>::Node(T var) {
    this->data = var;
    this->next = nullptr;
}