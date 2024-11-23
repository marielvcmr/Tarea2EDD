template<class T>
class Node
{
    private:
        int priority = 0;   //
        T data;
        Node<T>* next = nullptr;
        
    public:
        Node(int, T, Node<T>*); //
        ~Node();
        T getData();
        void setData(T);
        Node<T>* getNext();
        void setNext(Node<T>*);
        void print();
        int getPriority(); //
};