#include <iostream>
#include <string>
using namespace std;

struct persona{
  int edad;
  string nombre;
};

int main(){

  int n;

  cout<<"Ingrese la cantidad de personas: ";
  cin>>n;
  persona personas[n];
  for(int i=0;i<n;i++){
    cout<<"\nIngrese el nombre de la persona "<<i+1<<": ";
    cin.ignore();
    getline(cin,personas[i].nombre);
    cout<<"Ingrese la edad de la persona "<<i+1<<": ";
    cin>>personas[i].edad;
  }

  for(int i=0;i<n;i++){
    if(personas[i].edad>=20){
      personas[i].nombre="";
      personas[i].edad=0;
    }
  }

  for(int j=0;j<n;j++){
    if(personas[j].edad>0){
      cout<<"\n\nNombre: "<<personas[j].nombre<<" ";
      cout<<"edad: "<<personas[j].edad<<endl;}
  }
}
