#include <iostream>
#include "./listPQ/listPQ.cpp"
using namespace std;

int main()
{
   List<int, string> myList;
   myList.push(8, "Laura");
   myList.push(7, "Luis");
   myList.push(8, "Laugenys");
   myList.push(7, "Luisangel");
   myList.push(16, "Maria");
   myList.push(16, "Marian");
   myList.push(10, "Luz");
   myList.push(9, "Jose");
   myList.push(10, "Juan");
   myList.push(10, "Pepe");
   myList.push(0, "Daniel");
   myList.push(16, "Marianny");
   myList.push(0, "Danielis");
   myList.push(8, "Lara");
   myList.push(0, "Danny");
   cout<<myList.pop(5)<<endl;
   cout<<myList.pop(16)<<endl;
   cout<<myList.pop(0)<<endl;
   cout<<myList.pop(8)<<endl;
   cout<<myList.pop(9)<<endl;

   myList.printList();
}

