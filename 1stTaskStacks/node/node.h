template<class T>
class Node
{
    private:
        T data;                 // initial values when node is created but not initialized
        Node<T>* next = nullptr;
    public:
        Node(T, Node<T>*);  //constructor
        ~Node();   // destructor
        T getData();
        void setData(T);
        Node<T>* getNext();
        void setNext(Node<T>*);
        void printNode();
};