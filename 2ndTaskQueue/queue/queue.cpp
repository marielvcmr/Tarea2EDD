#include<iostream>
#include "./queue.h"

using namespace std;

//Crea cola con nodo inicial, si se la pasa null la cola se crea inicializa vacia
template<class T>
Queue<T>::Queue(int priority, T data, Node<T>* node)
{
    Node <T>* newNode = new Node<T>(priority, data, node);  // deductible that node is null
    head = newNode;
    tail = head;
    this->length++;  
}

template<class T>
Queue<T>::Queue()
{      // initializes head and tail both to null 
}  

//Destructor
template<class T>
Queue<T>::~Queue()
{
    this->head = nullptr;
    this->tail = nullptr;
}

template<class T>
bool Queue<T>::isEmpty()
{
    return this->head == nullptr;
}

template<class T>
void Queue<T>::push(int priority, T data)
{
    Node <T> *node = new Node<T>(priority, data, nullptr);
    if(isEmpty())
    {
        head = node;
        tail = node;
        this->length++; //bugfix
        return;
    }
    this->tail->setNext(node);
    this->tail=node;
    this->length++;
}

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
    data = node->getData();

    delete node;
    this->length--;
    return data;
}

template<class T>
void Queue<T>::print()
{
    if(isEmpty())
    {
        cout<<"The queue is empty."<<endl;
        return;
    }
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

template<class T>
bool Queue<T>::existPriority(int priority)
{
    bool result = false;
    Node<T>* node = head;
    while(node!=nullptr)
    {
        if(node->getPriority() == priority)
        {
            result = true;
            break;
        }
        node = node->getNext();
    }
    return result;
}

/*    cycle as long as the list is not empty: 
1) if priority does not exist increase it until it does and print it (keep the value)
2) while the queue is not empty and priority exists we process the head
3) Move the elements from the tempQueue to the original to repeat the cycle
*/
template<class T>
void Queue<T>::printWithPriority()
{
    Queue<T> tempQueue;
    int priority = 0;
    T data;
    int dataPriority;

    while(!isEmpty())
    {
        while(!existPriority(priority))
        {
            priority++;        // look for the priority
        }
        cout<<"Priority "<<priority<<": "<<endl;

        while(!isEmpty() && existPriority(priority))  
        {                            // prints elements of the specific priority
            if(head->getPriority() == priority)
            {
                cout<<pop()<<endl;
            }
            else
            {                       //and if they don't have the priority, moves them to a temp queue 
                dataPriority = head->getPriority();
                data = pop();
                tempQueue.push(dataPriority, data);
            }
        }

        while(!tempQueue.isEmpty())
        {
            dataPriority = tempQueue.head->getPriority();
            data = tempQueue.pop();
            push(dataPriority, data);
        }
    }
}


