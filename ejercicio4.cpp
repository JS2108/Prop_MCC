#include <iostream>
using namespace std;

int main(){
  double precio,tasa_a=5.5,tasa_b=25.5;
  char tipo;
  cout<<"Ingrese el precio del producto: ";
  cin>>precio;
  if(precio<=0)cout<<"Precio no válido\n";
  else{
    cout<<"Ingrese el tipo de producto A o B: ";
    cin>>tipo;

    switch(tipo){
      case 'a':
      case 'A':       cout<<"Su precio incluyendo una tasa de ";
                      cout<<"5.5% de IVA es: ";
                      cout<<precio*tasa_a<<endl; break;
      case'b':
      case'B':        cout<<"Su precio incluyendo una tasa de ";
                      cout<<"25.5% de IVA es: ";
                      cout<<precio*tasa_b<<endl;; break;
      default:        cout<<"Tipo de producto no válido\n";}}
}
