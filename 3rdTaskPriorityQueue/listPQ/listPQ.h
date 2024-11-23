#include "../nodeList/nodeList.cpp"

template<class P, class T>  // simple list  
class List
{
    private:
        NodeList<P, T>* head = nullptr;
        int length = 0; // none priorities
    public:
        List();  //empty list, with none priority levels
        List(P, T, NodeList<P, T>*);  // list with 1 priority level
        ~List();
        bool isEmpty();
        void push(P, T);
        T pop(P);
        void printList();
};
