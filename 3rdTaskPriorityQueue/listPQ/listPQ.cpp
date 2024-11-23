#include "listPQ.h"
#include <iostream>
using namespace std;

//Constructors
template<class P, class T>
List<P, T>::List()
{
}

template<class P, class T>
List<P, T>::List(P priority, T data, NodeList<P, T>* nextNodeList)
{   
   this->head = new NodeList(priority, data, nextNodeList);
   length++;
}
// Destructor
template<class P, class T>
List<P, T>::~List()
{
   this->head = nullptr;
}

template<class P, class T>
bool List<P, T>::isEmpty()
{
   return this->head == nullptr;
}

template<class P, class T>
void List<P, T>::push(P priority, T data)
{
   if(isEmpty())
   {
      NodeList<P, T>* nextNodeList = nullptr;
      this->head = new NodeList(priority, data, nextNodeList);
   }
   else
   {
      if(priority<head->getPriority()) // insert in head
      {
         this->head = new NodeList(priority, data, head);
      }
      else
      {
         NodeList<P, T>* actual = head;
         NodeList<P, T>* next = head->getNext();
         while(next!=nullptr && next->getPriority()<=priority)
         {
            actual = next;
            next = next->getNext(); 
         }
         //case in which priority exists
         if(actual->getPriority() == priority)
         {
            actual->insertInQueue(data);
         }
         else  // case in which priority does not exists
         {    // and it is not the first priority
            NodeList<P, T>* newNodeList = new NodeList(priority, data, next);
            actual->setNext(newNodeList);         
         }
      }   
   }
}

template<class P, class T>
T List<P, T>::pop(P priority)
{  
   T data;
   if(isEmpty())
   {
      return data;
   }
   else
   {  // at least one priority
      NodeList<P, T>* actual = head;
      NodeList<P, T>* next = head->getNext();
      while(next!=nullptr && next->getPriority()<=priority)
      {
         actual = next;
         next = next->getNext(); 
      } // place actual in node with asked priority

      if(actual->getPriority()==priority) // priority exists
      {
         return actual->popInQueue();
      }
      else //priority does not exist
      {
         return data;
      }
   }
}

template<class P, class T>
void List<P, T>::printList()
{
   NodeList<P, T>* node = head;
   while(node!=nullptr)
   {
      node->print();
      node = node->getNext();
   }
}


