// This is the file to include in your code if you want access to the
// complete LList template class
#include <typeinfo>
// First, get the declaration for the base list class
#include "list.h"
#define DefaultListSize 2

//JJ inserted link class
template <class Elem> class Link {
public:
  Elem element;      // Value for this node
  Link *next;        // Pointer to next node in list
  Link(const Elem& elemval, Link* nextval =NULL)
    { element = elemval;  next = nextval; }
  Link(Link* nextval =NULL) { next = nextval; }
};//--------------------

// Linked list implementation
template <class Elem> class LList: public List<Elem> {
private:
  Link<Elem>* head;       // Pointer to list header
  Link<Elem>* tail;       // Pointer to last Elem in list
  Link<Elem>* fence;      // Last element on left side
  int leftcnt;            // Size of left partition
  int rightcnt;           // Size of right partition
  void init() {           // Intialization routine
    fence = tail = head = new Link<Elem>;
    leftcnt = rightcnt = 0;
  }
  void removeall() {   // Return link nodes to free store
    while(head != NULL) {
      fence = head;
      head = head->next;
      delete fence;
    }
  }
public:
  LList(int size=DefaultListSize) { init(); }
  ~LList() { removeall(); }  // Destructor
  void clear() { removeall(); init(); }

  bool insert(const Elem&);
  bool append(const Elem&);
  bool remove(Elem&);
  void setStart()
    { fence = head; rightcnt += leftcnt; leftcnt = 0; }
  void setEnd()
    { fence = tail; leftcnt += rightcnt; rightcnt = 0; }
  void prev();
  void next() {
    if (fence != tail) // Don't move fence if right empty
      { fence = fence->next; rightcnt--; leftcnt++; }
  }
  int leftLength() const  { return leftcnt; }
  int rightLength() const { return rightcnt; }

  int Length() const {return leftcnt+rightcnt; }//JJ added
  void reverse();//JJ------------------------

  bool setPos(int pos);

  bool getValue(Elem& it) const {
    if(rightLength() == 0) return false;
    it = fence->next->element;
    return true;
  }
  void print() const;
};

template <class Elem> // Insert at front of right partition
bool LList<Elem>::insert(const Elem& item) {
  fence->next = new Link<Elem>(item, fence->next);
  if (tail == fence) tail = fence->next;  // New tail
  rightcnt++;
  return true;
}

template <class Elem> // Append Elem to end of the list
bool LList<Elem>::append(const Elem& item) {
  tail = tail->next = new Link<Elem>(item, NULL);
  rightcnt++;
  return true;
}

// Remove and return first Elem in right partition
template <class Elem> bool LList<Elem>::remove(Elem& it) {
  if (fence->next == NULL) return false; // Empty right
  it = fence->next->element;       // Remember value
  Link<Elem>* ltemp = fence->next; // Remember link node
  fence->next = ltemp->next;       // Remove from list
  if (tail == ltemp) tail = fence; // Reset tail
  delete ltemp;                    // Reclaim space
  rightcnt--;
  return true;
}

template <class Elem> void LList<Elem>::reverse(){//JJ---------
    // Initialize current, previous and
    // next pointers
  Link<Elem>* current = head;
  Link<Elem>* prev = NULL, *next = NULL;

    while (current != NULL) {
        // Store next
        next = current->next;

        // Reverse current node's pointer
        current->next = prev;

        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    head = prev;
}

/* poderosisimo

t4=n
t2=12345

while t2 != NULL
  t1=t2-> | 2345
  t3=t2   | 12345 (t3=head->next)
  t3->=t4 | 1
  t4=t3   | 1
  t2=t1   | 2345
  --------------
  t1=t2-> | 345
  t3=t2   | 2345
  t3->=t4 | 21
  t4=t3   | 21
  t2=t1   | 345
  --------------
  t1=t2-> | 45
  t3=t2   | 345
  t3->=t4 | 321
  t4=t3   | 321
  t2=t1   | 45
  --------------
  t1=t2-> | 5
  t3=t2   | 45
  t3->=t4 | 4321
  t4=t3   | 4321
  t2=t1   | 5
  --------------
  t1=t2-> | N
  t3=t2   | 5
  t3->=t4 | 54321
  t4=t3   | 54321
  t2=t1   | N

  */



// Move fence one step left; no change if left is empty
template <class Elem> void LList<Elem>::prev() {
  Link<Elem>* temp = head;
  if (fence == head) return; // No previous Elem
  while (temp->next!=fence) temp=temp->next;
  fence = temp;
  leftcnt--; rightcnt++;
}

// Set the size of left partition to pos
template <class Elem> bool LList<Elem>::setPos(int pos) {
  if ((pos < 0) || (pos > rightcnt+leftcnt)) return false;
  rightcnt = rightcnt + leftcnt - pos; // Set counts
  leftcnt = pos;
  fence = head;
  for(int i=0; i<pos; i++) fence = fence->next;
  return true;
}

template <class Elem> void LList<Elem>::print() const {
  Link<Elem>* temp = head;
  cout << "< ";
  while (temp != fence) {
    cout << temp->next->element << " ";
    temp = temp->next;
  }
  cout << "| ";
  while (temp->next != NULL) {
    cout << temp->next->element << " ";
    temp = temp->next;
  }
  cout << ">\n";
}
