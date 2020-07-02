//ejercicio 10
#include <iostream>
using namespace std;

int main(){
  int n,*arr,*sq;
  cout<<"Ingrese el tamaño del vector: ";
  cin>>n;
  arr=new int [n];//declara dinamicamente
  sq=new int [n];//declara dinamicamente
  cout<<"Ingrese el vector: ";
  for(int i=0;i<n;i++)//Captura arr[]
    cin>>arr[i];
  for(int i=0;i<n;i++)//Llena sq[] con los cuadrados de arr[]
    sq[i]=arr[i]*arr[i];
  delete[] arr;//Borra arr
  for(int i=0;i<n;i++)//Imprime sq[]
    cout<<sq[i]<<" ";
  cout<<endl;
  delete[] sq;//Borra sq
}
