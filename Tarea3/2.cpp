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
  L.append(6);
  L.append(7);
  L.setStart();
  L.print();
  L.reverse();
  L.print();
  L.setPos(0);
  L.print();

}
/*
template <class Elem> void LList<Elem>::reverse(){//JJ---------
  Link<Elem>* act = head;
  Link<Elem>* ant = NULL, *sig = NULL;
    while (act!=NULL) {
        sig = act->next;
        act->next = ant;
        ant = act;
        act = sig;
    }
    head = ant;
}
*/
