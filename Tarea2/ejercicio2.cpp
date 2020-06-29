#include <iostream>
using namespace std;

int counter(string a){
  int n;
  char *ptr;
  ptr=&a[0];
  while(*ptr!='\0'){
    if(*ptr=='A') n++;
    ptr++;
  }
  return n;
}

int main(){
  string a;
  cout<<"Ingrese una cadena: ";
  getline(cin,a);
  int count=counter(a);
  cout<<"A aparece "<<count<<" veces\n";
}
