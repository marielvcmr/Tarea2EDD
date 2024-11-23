#include "../node/node.cpp"
template<class T>
class Stack
{
    private:
        Node<T>* head = nullptr;   //initial values when stack is created but not initialized
        int length = 0;
    public:
        Stack(T, Node<T>*); /**///constructor with data value and next node (above)
        ~Stack();         /**/  // destructor 
        void push(T); /**///function to insert an element into the stack
        T pop();          //function to remove an element and return it       
        bool isEmpty(); /**/
        int getLength();
        void print();  // print the whole stack
        void reverseOrder(); // reverses the stack order
};