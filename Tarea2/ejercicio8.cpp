//ejercicio 8
/*Para que el programa sea correcto debemos
declarar la función "fun". Puede declararse
antes de la función Main y después definirse
al terminar Main como en el caso 1.
También puede ser declarada y definida en un
solo bloque antes de la función Main, como
se muestra en el caso 2*/
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

//Definir y declararla función antes de la
//función Main
int fun(int r){return 2*r;}//<-----

int main(){
  int n,p=5;
  n=fun(p);
  cout<<"p="<<p<<" n="<<n;
}
