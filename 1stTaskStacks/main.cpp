/*1. Crear un programa que invierta el orden de una pila 
guardando los datos con el orden invertido dentro de
la misma pila.*/

#include "./stack/stack.cpp"
#include <iostream>
using namespace std;

int main()
{
    Stack<char> myStack('m', nullptr);
    myStack.push('a');
    myStack.push('r');
    myStack.push('i');
    myStack.push('e');
    myStack.push('l');
    myStack.push('v');
    myStack.push('c');
    myStack.push('h');
    myStack.push('i');
    myStack.push('q');
    myStack.push('u');
    myStack.push('i');
    myStack.push('n');
    myStack.push('q');
    myStack.push('u');
    myStack.push('i');
    myStack.push('r');
    myStack.push('a');

    cout<<"Insertion order from first to last insertion in the original stack: "<<endl;
    cout<<"m, a, r, i, e, l, v, c, h, i, q, u, i, n, q, u, i, r, a"<<endl<<endl;

    myStack.reverseOrder();
    cout<<"Stack from its head after reversing order: "<<endl;
    myStack.print();
}