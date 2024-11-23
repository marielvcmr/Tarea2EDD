#include<iostream>
#include "./stack.h"

using namespace std;

//Check whether list is empty
template<class T>
bool Stack<T>::isEmpty()
{
    return this->head==nullptr;
}

/*Crea pila con nodo inicial, si se la pasa null, la pila se crea e
inicializa vacia*/
template<class T>
Stack<T>::Stack(T data, Node<T>* node)
{
        Node<T>* newNode = new Node<T>(data, node);  //creates pointer with new node
        head=newNode;
        this->length++; // head has the T data value and node as its next node
}
//destructor
template<class T>
Stack<T>::~Stack()
{
        this->head = nullptr;
}


//Insertar nodo en tope
// 1. Crear nodo
// 2. Apuntar el nodo a head.
// 3. Apuntar head al nuevo nodo.
// 4. Aumentar el contador de la pila
template<class T>
void Stack<T>::push(T data)
{
        Node <T> *node = new Node<T>(data, head);
        head = node;
        this->length++;
}  // works perfectly for the empty case too 


//sacar nodo del tope de la pila (la acción elimina el nodo y recupera el dato)
// 1. Si la pila esta vacia se devuelve el valor por defecto del tipo de dato.
// 2. Creamos un nodo temporal a head.
// 3. Apuntamos head a su nodo siguiente.
// 4. Recuperamos el dato del nodo temporal (El que se va a sacar de la cola).
// 5. Liberamos memoria (delete node)
// 6. Reducimos tamaño de la pila
// 7. retornamos dato del nodo.
template<class T>
T Stack<T>::pop()
{
        T data; //creates a not-initialized variable of the T datatype
        if(isEmpty()) 
        {
           return data;  //any value
        }
        Node <T> *node = head; 
        head=head->getNext();
        data = node->getData();
        delete node;
        this->length--;
        return data;
}

template<class T>
void Stack<T>::print()
{
      if(isEmpty())
      {
        cout<<"List is empty"<<endl;
      }
      else
      {
        while(!isEmpty())
        {
          std::cout<<pop()<<endl;
        }
      }
}

template<class T>
int Stack<T>::getLength()
{
    return this->length;
}

template<class T>
void Stack<T>::reverseOrder()
{
        T dataHead = this->pop();
        Stack<T> temp1(dataHead, nullptr);
        while(!(this->isEmpty()))
        {
                temp1.push(this->pop());
        }

        dataHead = temp1.pop();
        Stack<T> temp2(dataHead, nullptr);
        while(!(temp1.isEmpty()))
        {
                temp2.push(temp1.pop());
        }

        //Finally insert back into the original stack but with reversed order
        while(!(temp2.isEmpty()))
        {
                this->push(temp2.pop());
        }
}

