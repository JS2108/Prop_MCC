#include <iostream>
using namespace std;

int main(){
  int d;
  double p;

  cout<<"Para calcular el producto escalar de dos vectores ingrese la dimension: ";
  cin>>d;

  double u[d],v[d];

  cout<<"Ingrese el vector A: ";
  for(int i=0;i<d;i++){
    cin>>u[i];}

  cout<<"Ingrese el vector B: ";
  for(int i=0;i<d;i++){
    cin>>v[i];}

  for(int i=0;i<d;i++){
    p+=u[i]*v[i];}
  cout<<"El producto escalar de A y B es: ";
  cout<<p<<endl;

}
