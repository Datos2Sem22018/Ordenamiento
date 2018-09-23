//
// Created by karla on 23/09/18.
//

#ifndef ORDENAMIENTO_NODE_H
#define ORDENAMIENTO_NODE_H


template <class T>
class Node {
public:
    T data;
    Node* next;
    Node<T> (T var);
};


#endif //ORDENAMIENTO_NODE_H
