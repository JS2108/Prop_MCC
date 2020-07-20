//ejercicio 1
#include <iostream>
using namespace std;
#include "link.h"
#include "lstack.h"


bool balance(string s){//función para saber si una expresión es balanceada
  bool start;
  LStack<char> P;//Pila de lista ligada
  char popped,top;//chars para elementos de la pila
  for (int i = 0; i < s.length(); i++){//recorre el string
    if (s[i] == '{' || s[i] == '[' || s[i] == '('){ //solo toma en cuenta {}[]()
      P.push(s[i]);//ingresa el símbolo a la pila
      start=1;}//verifica que inicie con una apertura, de otro modo } { es válida
    if (P.length()>0){//continúa a evaluar los caracteres si la pila no está vacía
      P.topValue(top);//asigna a top el valor del tope de pila
      switch(s[i]){//switch sobre la entrada
        case '}' : if(top=='{') P.pop(popped); else break;//si encuentra un par
        case ']' : if(top=='[') P.pop(popped); else break;//de la forma { }, etc
        case ')' : if(top=='(') P.pop(popped); else break;//entonces va balanceada
      }}
    else//si por ejemplo encuentra un par { ) entonces no es balanceada
      break;//interrumpe la búsqueda en cuanto detecta que no es balanceada
  }
  return (P.length()==0 && start==1) ? true : false;
  //si se vacía la pila es porque es balanceada, y si start=1 tuvo un inicio correcto
}


int main(){
  string input;
  cout<<"Ingrese una expresión para verificar su balance: \n";
  getline(cin,input);
  cout<<input;
  balance(input) ? cout<<" Es balanceada\n" : cout<<" No es balanceada\n";
  }
