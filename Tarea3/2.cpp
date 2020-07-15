//ejercicio 2 función revertir
#include <iostream>
using namespace std;
#include "llist.h"

int main(){
  LList<int> L;
  L.append(1);
  L.append(2);
  L.append(3);
  L.append(4);
  L.append(5);
  L.reverse();
  L.print();
} 

/*template <class Elem> void LList<Elem>::reverse(){
  Link<Elem>* current = head;
  Link<Elem>* prev = NULL, *next = NULL;

    while (current != NULL) {
        next = current->next;

        current->next = prev;

        prev = current;
        current = next;
    }
    head = prev;
}*/
