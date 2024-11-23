#include<iostream>
#include "./queue.h"

using namespace std;

template<class T>
Queue<T>::Queue()
{      // initializes head and tail both to null 
} 

//Crea cola con nodo inicial, ---- si se la pasa null la cola se crea inicializa vacia
template<class T>
Queue<T>::Queue(T data, Node<T>* node)
{
    Node <T>* newNode = new Node<T>(data, node);  // supposed that node is null
    head = newNode;
    tail = head;
    this->length++;  
}

//Destructor, asegura que head y tail queden sin apuntar a nada
template<class T>
Queue<T>::~Queue()
{
    this->head = nullptr;
    this->tail = nullptr;
}

//Comprobar si esta vacia
template<class T>
bool Queue<T>::isEmpty()
{
    return this->head == nullptr;
}

//Insertar nodo en la cola(en tail)
template<class T>
void Queue<T>::push(T data)
{
    Node <T> *node = new Node<T>(data, nullptr);
    if(isEmpty())
    {
        head = node;
        tail = node;
        this->length++; //bugfix
        return;
    }
    //not empty queue case
    this->tail->setNext(node);
    this->tail=node;
    this->length++;
}

//sacar nodo del inicio de la cola(head)
// la acción recupera el dato y elimina el nodo
template<class T>
T Queue<T>::pop()
{
    T data;
    if(isEmpty())
    {
        return data;
    }
    Node<T>* node = head;
    head = head->getNext();
    data = node->getData(); // retrieves the data
       
    delete node;
    this->length--;
    return data;
}

template<class T>
void Queue<T>::print()
{
    while(!isEmpty()) 
    {
       cout<<pop()<<endl;
    }
}

template<class T>
int Queue<T>::getLength()
{
    return this->length;
}