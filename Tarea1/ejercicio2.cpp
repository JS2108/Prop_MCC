//ejercicio 2

#include <iostream>
using namespace std;
#include <cmath>

int main(){
  int a,b,c;
  cout<<"Para calcular las raíces de ax^2+bx+c=0, \nIngrese a: ";cin>>a;
  cout<<"Ingrese b: ";cin>>b;
  cout<<"Ingrese c: ";cin>>c;

  double d;
  d=(b*b)-(4*a*c);
  if(d<0){
    cout<<"La solución no tiene raíces reales\n";
  }
  else if(d==0){
    cout<<"Las raíces son iguales: "<<-b/(2*a)<<endl;
  }
  else{
    double r1,r2;
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
    cout<<"R1: "<<r1<<" R2: "<<r2<<endl;
  }
}
