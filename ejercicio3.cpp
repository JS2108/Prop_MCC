#include <iostream>
using namespace std;

int main(){
  int a,b,input;
  cout<<"Ingrese a: ";cin>>a;
  cout<<"Ingrese b: ";cin>>b;
  cout<<"Ingrese una acción: ";
  cout<<"1. Para saber si la suma es par\n";
  cout<<"2. Para saber si el producto ab es par\n";
  cout<<"3. Conocer el signo de la suma a+b\n";
  cout<<"4. Conocer el signo del producto a*b\n";
  cin>>input;
  switch(input){
    case 1: if((a+b)%2==0)cout<<"Es par\n";
            else cout<<"No es par\n";
            break;
    case 2: if((a*b)%2==0)cout<<"Es par\n";
            else cout<<"No es par\n";
            break;
    case 3: if((a+b)>0) cout<<"Es positivo\n";
            else if((a+b)<0) cout<<"Es negativo\n";
              else cout<<"Es neutro\n";
            break;
    case 4: if((a*b)>0) cout<<"Es positivo\n";
            else if((a+b)<0) cout<<"Es negativo\n";
              else cout<<"Es neutro\n";
    default: cout<<"Acción no válida\n";}
}
