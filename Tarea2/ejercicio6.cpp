//ejercicio 6
#include <iostream>
using namespace std;

bool func(int t[], int n, int &v){
  int *ptr;//puntero para la referencia de v
  ptr=&v;
  bool b;//variable para el retorno
  bool flag;
  for(int j=0;j<n && b!=true;j++){//recorre el vector
    if(t[j]>=0&&t[j]<=10){//si el elemento esta entre 0 y 10
      *ptr=t[j];//asigna valor a v
      b=true;//valor de retorno
      break;}//interrumpe el for, solo se pide el primer elemento
    else
      b=false;
  }
  return b;
}

int main(){
  int n,v;
  cout<<"Ingrese el tamaño del vector: ";
  cin>>n;
  int arr[n];
  cout<<"Ingrese el vector de enteros: ";
  for(int i=0;i<n;i++)cin>>arr[i];//captura el vector
  func(arr,n,v);//encuentra el primer numero entre 0 y 10
    cout<<"El primer numero entre 0 y 10 encontrado es: "<<v<<endl;
}
