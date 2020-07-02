//ejercicio 5
#include <iostream>
using namespace std;

bool f(int a){
  if(a<=1) return false;//0, 1 y números menores no son primos
  else{
    for(int i=2;i<a;i++)
      if(a%i==0)//si es divisible por otro numero, no es primo
        return false;//si
    return true;//si ningún otro número lo divide, es primo
  }
}

int main(){
  int input;
  cout<<"Ingrese un número para saber si es primo: ";
  cin>>input;
  if(f(input))//si el retorno de f es true, el numero es primo
    cout<<"Su número es primo"<<endl;
  else //si el retorno de f no es true, el numero no es primo
    cout<<"Su número no es primo"<<endl;
}
