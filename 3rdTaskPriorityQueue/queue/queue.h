#include "../nodeQueue/node.cpp"

template<class T>
class Queue
{
    private:
        Node<T>* head = nullptr;
        Node<T>* tail = nullptr;
        int length = 0;
    public:
        Queue(T, Node<T>*); // passed T data is the head and tail at the same time
        // not argument constructor
        Queue();
        ~Queue();
        void push(T);
        T pop();
        bool isEmpty();
        int getLength();
        void print();
};