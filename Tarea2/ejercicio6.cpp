#include <iostream>
using namespace std;

bool func(int t[], int n, int &v){
  int *ptr;
  ptr=&v;
  bool b;
  bool flag;
  for(int j=0;j<n && b!=true;j++){
    if(t[j]>=0&&t[j]<=10){
      *ptr=t[j];
      b=true;}
    else b=false;}
  return b;
}

int main(){
  int n,v;
  cout<<"Ingrese el tamaño del vector: ";
  cin>>n;
  int arr[n];
  cout<<"Ingrese el vector de enteros: ";
  for(int i=0;i<n;i++)cin>>arr[i];
  func(arr,n,v);
    cout<<"El primer numero entre 0 y 10 encontrado es: "<<v<<endl;
}
