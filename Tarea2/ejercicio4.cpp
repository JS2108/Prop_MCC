//ejercicio 4
#include <iostream>
using namespace std;

struct datos{//estructura para los datos de cada persona
  string nombre;
  string apellido;
  int edad;
};

int main(){
  int n;
  cout<<"Ingrese el número de personas: ";
  cin>>n;
  datos personas[n],*ptr;//crea el vector de personas y su puntero
  for(int i=0;i<n;i++){//captura los datos de n personas
    cin.ignore();
    cout<<"Ingrese el nombre de la persona "<<i+1<<": ";
    getline(cin,personas[i].nombre);
    cout<<"Ingrese el apellido de la persona "<<i+1<<": ";
    getline(cin,personas[i].apellido);
    cout<<"Ingrese la edad de la persona "<<i+1<<": ";
    cin>>personas[i].edad;
  }
  ptr=&personas[0];//puntero para el vector de personas
  cout<<"Las personas mayores de edad son: \n";
  for(int i=0;i<n;i++){
    if((*(ptr+i)).edad>=18){//el puntero busca personas con edad>=18
      cout<<(*(ptr+i)).nombre<<" "<<(*(ptr+i)).apellido<<endl;}}
}
