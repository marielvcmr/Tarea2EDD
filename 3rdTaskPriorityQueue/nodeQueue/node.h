template<class T>   //usual node
class Node
{
    private:
        T data;
        Node<T>* next = nullptr;
    public:
        // constructors 
        Node();
        Node(T, Node<T>*);
        //Destructors
        ~Node();
        // Data
        T getData();
        void setData(T);
        // next node
        Node<T>* getNext();
        void setNext(Node<T>*);
        void print();
};