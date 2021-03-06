// This is the file to include in your code if you want access to the
// complete LStack template class
#define DefaultListSize 0
// Include the link class
//#include "link.h"

// First, get the declaration for the base stack class
#include "stack.h"

// Link list-based stack implementation
template <class Elem> class LStack: public Stack<Elem> {
private:
  Link<Elem>* top;           // Pointer to first element
  int size;                  // Count number of elements
public:
  LStack(int sz =DefaultListSize) { top = NULL; size = 0; }
  ~LStack() { clear(); }     // Destructor
  void clear() {
    while (top != NULL) {    // Delete link nodes
      Link<Elem>* temp = top;
      top = top->next;
      size = 0;
      delete temp;
    }
  }
  bool push(const Elem& item) {
    top = new Link<Elem>(item, top);
    size++;
    return true;
  }
  bool pop(Elem& it) {
    if (size == 0) return false;
    it = top->element;
    Link<Elem>* ltemp = top->next;
    delete top;
    top = ltemp;
    size--;
    return true;
  }

  void print(){//imprimir
    Link<Elem>* temp = top;
    cout<<temp->element<<" ";
    while (temp->next != NULL ) {
      cout << temp->next->element << " ";
      temp = temp->next;
    }
    cout<<endl;
  }

  bool topValue(Elem& it) const {
    if (size == 0) return false;
    it = top->element;
    return true;
  }
  int length() const { return size; }
};
