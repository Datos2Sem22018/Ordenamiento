//
// Created by karla on 24/09/18.
//

#ifndef ORDENAMIENTO_LINKEDLISTDOUBLE_H
#define ORDENAMIENTO_LINKEDLISTDOUBLE_H


#include "Node/NodeDouble.h"

template <class T>
class LinkedListDouble {
public:
    NodeDouble<T>* head;
    int size;
    bool isEmpty();
    void setValue(T var, int pos);
    void add(T var);
    void remove(int pos);
    NodeDouble<T>* getNode(int pos);
    NodeDouble<T>* search(T var);
    T get(int i);
    void printList();
    LinkedListDouble();
    ~LinkedListDouble() = default;

};
template <class T>
LinkedListDouble<T>::LinkedListDouble() {
    head = NULL;
    size = 0;
}
template <class T>
void LinkedListDouble<T>::setValue(T var, int pos) {
    getNode(pos)->data = var;
}

template <class T>
bool LinkedListDouble<T>::isEmpty() {
    if (head == NULL) {
        return 1;
    } else {
        return 0;
    }
}

template<class T>
void LinkedListDouble<T>::add(T var) {
    if (size == 0) {
        auto* aux = new NodeDouble<T>(var);
        head = aux;
        head->next = NULL;
        head->previous = NULL;
        size++;
    } else {
        NodeDouble<T>* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        auto * aux = new NodeDouble<T>(var);
        aux->next = NULL;
        current->next = aux;
        aux->previous = current;
        size++;
    }
}
template <class T>
void LinkedListDouble<T>::remove(int pos)
{
    int pos_aux = pos;
    NodeDouble<T>* current = head;
    if (pos_aux == 0) {
        head = current->next;
        size -= 1;
    } else if (pos_aux == size - 1) {
        while (current->next->next != NULL) {
            current = current->next;
        }
        current->next = NULL;
        size -= 1;
    } else if (pos_aux >= size) {
        std::cout<<"No se encuentra el elemento"<< std::endl;
    } else {
        int b = 0;
        while (pos_aux - 1 != b) {
            current = current->next;
            b++;
        }
        NodeDouble<T>* aux = current->next->next;
        current->next = aux;
        if (aux == NULL) {
            size -= 1;
        } else {
            aux->previous = current;
            size -= 1;
        }
    }
}
template <class T>
NodeDouble<T>* LinkedListDouble<T>::getNode(int pos)
{
    NodeDouble<T>* aux = head;
    int x = 0;
    while (x != pos) {
        aux = aux->next;
        x++;
    }
    if (aux == NULL) {
        return NULL;
    }
    return aux;
}
template <class T>
NodeDouble<T>* LinkedListDouble<T>::search(T var) {
    NodeDouble<T>* ptr = head;
    while (ptr != NULL && ptr->data != var) {
        ptr = ptr->next;
    }
}
template <class T>
T LinkedListDouble<T>::get(int i) {
    NodeDouble<T>* aux = head;
    int x = 0;
    while (x != i) {
        aux = aux->next;
        x++;
    }
    if (aux == NULL) {
        std::cout<<"No se encuentra el elemento"<< std::endl;
        return NULL;
    }
    return aux->data;
}

template <class T>
void LinkedListDouble<T>::printList() {
    NodeDouble<T>* ptr = head;
    while (ptr != NULL) {
        std::cout << ptr->data << "; " << std::flush;
        ptr = ptr->next;
    }
}


#endif //ORDENAMIENTO_LINKEDLISTDOUBLE_H
