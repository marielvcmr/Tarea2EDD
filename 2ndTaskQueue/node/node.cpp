#include<iostream>
#include "node.h"
using namespace std;

template<class T>
Node<T>::Node(int priority, T data, Node<T>* next)
{
    this->priority = priority;
    this->data = data;
    this->next = next;
}

template<class T>
Node<T>::~Node()
{
    this->next = nullptr;
}

// CONTENT DATA
template<class T>
T Node<T>::getData()
{
    return this->data;
}
template<class T>
void Node<T>::setData(T data)
{
    this->data = data;
}

// SUCESSOR NODE
template<class T>
Node<T>* Node<T>::getNext()
{
    return this->next;
}

template<class T>
void Node<T>::setNext(Node<T>* next)
{
    this->next = next;
}

template<class T> //
void Node<T>::print()
{
   cout<<"Priority: "<<this->priority<<endl;
   cout<<"Data: "<<this->data<<endl;
   cout<<"Direccion del siguiente: "<<this->next<<endl;
}

template<class T>
int Node<T>::getPriority()
{
    return this->priority;
}


