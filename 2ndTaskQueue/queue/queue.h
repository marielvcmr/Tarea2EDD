#include "../node/node.cpp"

template<class T>
class Queue
{
    private:
        Node<T>* head = nullptr;
        Node<T>* tail = nullptr;
        int length = 0;
    public:
        Queue(int, T, Node<T>*); // passed T data is the head and tail at the same time
        // not argument constructor
        Queue(); // declares an empty queue
        ~Queue();
        void push(int, T); // needs priority to add a new element to the queue
        T pop();
        bool isEmpty();
        int getLength();
        void print();
        // new functions
        bool existPriority(int); 
        void printWithPriority();
};