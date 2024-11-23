#include<iostream>
#include "nodeList.h"
using namespace std;

//Constructor Node for the creation of a list (empty node, first priority)
template<class P, class T>
NodeList<P, T>::NodeList(P priority)
{
    this->priority = priority;
}

// Constructor for addition of a node (New priority, with a queue element)
template<class P, class T>
NodeList<P,T>::NodeList(P priority, T data, NodeList<P,T>* nextNodeList)
{
    this->priority = priority;
    this->queue.push(data);
    this->next = nextNodeList;
}

// Destructor
template<class P, class T>
NodeList<P,T>::~NodeList()
{
    this->next = nullptr;
}

//Getters
template<class P, class T>
Queue<T> NodeList<P,T>::getQueue()
{
    return this->queue;
}

template<class P, class T>
P NodeList<P,T>::getPriority()
{
    return this->priority;
}

template<class P, class T>
NodeList<P,T>* NodeList<P,T>::getNext()
{
    return this->next;
}

//modifiers
template<class P, class T>
void NodeList<P, T>::setNext(NodeList<P, T>* next)
{
    this->next = next;
}

template<class P, class T>
void NodeList<P, T>::insertInQueue(T data)
{
    this->queue.push(data);
}

template<class P, class T>
T NodeList<P, T>::popInQueue()
{
    return this->queue.pop();
}

template<class P, class T>
void NodeList<P, T>::print()
{
    //print queue from node if it's not empty
    if(!(this->getQueue().isEmpty()))
    {
        cout<<"Priority Level: "<<this->getPriority()<<endl;
    }
    while(!(this->queue.isEmpty()))
    {
        cout<<this->queue.pop()<<endl;
    }
}