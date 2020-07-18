//ejercicio 2
#include <iostream>
using namespace std;
#include "link.h"
#include "lstack.h"
#include "lqueue.h"

int main(){
  LQueue<int> Q;
  LStack<int> S;
  int x,n;

  //llenado de cola
  Q.enqueue(10);
  Q.enqueue(20);
  Q.enqueue(30);
  Q.enqueue(40);
  Q.enqueue(50);
  //---------------

  cout<<"La cola es: ";Q.print();
  n=Q.length();               //tamaño de la cola
  for(int i=0;i<=n-1;i++){    //mueve la cola a la pila
    Q.dequeue(x);             //desencola el elemento de Q y lo mueve a x
    S.push(x);}               //hace push en S con el valor de x
  cout<<"La pila es: ";S.print();

  n=S.length();               //tamaño de la pila
  for(int i=0;i<=n-1;i++){    //mueve la pila a la cola
    S.pop(x);                 //hace pop en S y guarda el valor en x
    Q.enqueue(x);}            //encola el valor de x en Q
  cout<<"La cola resultante es: ";Q.print();
}
