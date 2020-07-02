//ejercicio 2
#include <iostream>
using namespace std;

int counter(string a){
  int n;//número de apariciones
  char *ptr;
  ptr=&a[0];
  while(*ptr!='\0'){//Recorre la cadena hasta el final
    if(*ptr=='A') n++;//incrementa n si hay una A
    ptr++;
  }
  return n;
}

int main(){
  string a;
  cout<<"Ingrese una cadena: ";
  getline(cin,a);//captura la cadena
  int count=counter(a);//encuentra el número de A's
  cout<<"A aparece "<<count<<" veces\n";
}
