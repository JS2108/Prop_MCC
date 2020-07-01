#include <iostream>
using namespace std;

struct datos{
  string nombre;
  string apellido;
  int edad;
};

int main(){
  int n;
  cout<<"Ingrese el número de personas: ";
  cin>>n;
  datos personas[n],*ptr;
  for(int i=0;i<n;i++){
    cin.ignore();
    cout<<"Ingrese el nombre de la persona "<<i+1<<": ";
    getline(cin,personas[i].nombre);
    //cin>>personas[i].nombre;
    cout<<"Ingrese el apellido de la persona "<<i+1<<": ";
    getline(cin,personas[i].apellido);
    //cin>>personas[i].apellido;
    cout<<"Ingrese la edad de la persona "<<i+1<<": ";
    cin>>personas[i].edad;
  }
  ptr=&personas[0];
  cout<<"Las personas mayores de edad son: \n";
  for(int i=0;i<n;i++){
    if((*(ptr+i)).edad>=18){
      cout<<(*(ptr+i)).nombre<<" "<<(*(ptr+i)).apellido<<endl;
    }
  }
}
