#include "../queue/queue.cpp"

// node from the simple list
// every node represents a priority level

template<class P, class T>
class NodeList
{
    private:
        P priority;
        Queue<T> queue; // initializes head and tail both to nullptr
        NodeList<P,T>* next = nullptr;
        
    public:
        NodeList(P);// creation with just one priority
        NodeList(P, T, NodeList<P, T>*);//
        ~NodeList();//
        //Getters
        Queue<T> getQueue();
        P getPriority();
        NodeList<P, T>* getNext();
        // modifiers
        void setNext(NodeList<P, T>*);
        void insertInQueue(T);
        T popInQueue();
        //prints queue in a level
        void print();
};
