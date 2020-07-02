//ejercicio 9
#include <iostream>
using namespace std;

int n=0;//variable global
void f(){
  n++;//incremento a variable global
  cout<<"Número de veces que se ha llamado: ";
  cout<<n<<endl;//solo se imprime, no se retorna
}

int main(){
  cout<<"Ingrese el número de veces a llamar: ";
  int m;
  cin>>m;
  for(int i=0;i<m;i++) //llama m veces a la funcion f
    f();
}
