// This is the file to include in your code if you want access to the
// complete LQueue template class

// Include the link class

#define DefaultListSize 0
// First, get the declaration for the base stack class
#include "queue.h"

//JJ inserted link class
template <class Elem> class Link {
public:
  Elem element;      // Value for this node
  Link *next;        // Pointer to next node in list
  Link(const Elem& elemval, Link* nextval =NULL)
    { element = elemval;  next = nextval; }
  Link(Link* nextval =NULL) { next = nextval; }
};//--------------------

// Linked queue implementation
template <class Elem> class LQueue: public Queue<Elem> {
public:
  Link<Elem>* front;     // Pointer to front queue node
  Link<Elem>* rear;      // Pointer to rear queue node
  int size;              // Number of elements in queue
public:
  LQueue(int sz =DefaultListSize)  // Constructor
    { front = NULL;  rear = NULL; size = 0; }
  //~LQueue() { clear(); } // Destructor
  void clear() {         // Clear queue
    while(front != NULL) { // Delete each link node
      rear = front;
      front = front->next;
      delete rear;
    }
    rear = NULL;
    size = 0;
  }
  bool enqueue(const Elem& it) {
    if (rear == NULL)   // Empty queue
      front = rear = new Link<Elem>(it, NULL);
      //front = rear = new Link<Elem>(it, NULL);
    else {              // Append new node
      rear->next = new Link<Elem>(it, front);
      rear = rear->next;
    }
    size++;
    return true;
  }
  bool dequeue(Elem& it) { // Remove Elem from front
    if (size == 0) return false;    // Empty
    it = front->element;            // Store dequeued value
    Link<Elem>* ltemp = front;      // Hold dequeued link
    front = front->next;            // Advance front
    delete ltemp;                   // Delete link
    if (front == NULL) rear = NULL; // Dequeued last element
    size --;
    return true;                    // Return element value
  }
  bool frontValue(Elem& it) const {
    if (size == 0) return false;
    it = front->element;
    return true;
  }
  virtual int length() const { return size; }

/*void print(){
  Link<Elem>* temp=front;
  while(temp->next != rear){
    temp=temp->next;
    cout<<temp->next->element<<" ";
  }
  cout<<endl;
}*/
void print(){//imprimir
  Link<Elem>* temp = front;
  cout<<temp->element<<" ";
  while (temp != rear) {
    cout << temp->next->element << " ";
    temp = temp->next;
  }
  cout<<endl;
}

void left_roll(){
  rear=front;                         //rear=front (el ultimo pasa a ser el primero)
  front=front->next;                  //front ahora es el segundo
}
void right_roll(){                    //rotacion derecha
  Link<Elem>* temp=front->next;       //apuntador temporal
  while(temp->next!=rear){            //lleva el puntero al penultimo elemento
    temp=temp->next;}
  front=rear;                         //el primero pasa a ser el ultimo
  rear=temp;                          //el ultimo pasa a ser el penultimo
}
};
