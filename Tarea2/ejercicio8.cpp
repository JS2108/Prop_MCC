//---------- 1 ----------
#include <iostream>
using namespace std;

//Declarar funcion aquí
//int fun(int r); <-----
//y definirla después de la función Main
int main(){
  int n,p=5;
  n=fun(p);
  cout<<"p="<<p<<" n="<<n;
}

//definición de "fun"
int fun(int r){return 2*r;}

//---------- 2 ----------
#include <iostream>
using namespace std;

//Definir la función antes de la función Main
int fun(int r){return 2*r;}//<-----

int main(){
  int n,p=5;
  n=fun(p);
  cout<<"p="<<p<<" n="<<n;
}
