#include <iostream>
#include "./queue/queue.cpp"
using namespace std;

int main()
{
    Queue<string> miCola;
    miCola.push(1, "Daniel");
    miCola.push(2, "Pablo");
    miCola.push(3, "Coraline");
    miCola.push(5, "Alfonzo");
    miCola.push(2, "Lara");
    miCola.push(8, "Paula");
    miCola.push(10, "Chancho");
    miCola.push(5, "Luz");

    miCola.printWithPriority();
}

