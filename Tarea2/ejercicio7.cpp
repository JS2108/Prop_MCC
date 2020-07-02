//ejercicio 7
#include <iostream>
using namespace std;

int f(int T[], int n){
  int ind;
  for(int i=0;i<n;i++)//recorre el vector
    if(T[i]>=0 && T[i]<=10){//condicion del elemento entre 0 y 10
      ind=i;//asigna el indice desde 0, si fuese desde 1 seria i+1
      break;}//interrumpe el for, solo se pide el primer elemento
    else ind=-1;//si no se cumple, devuelve -1
  return ind;
}

int main(){
  int n,index;
  cout<<"Ingrese el tamaño del vector: ";
  cin>>n;
  int arr[n];
  cout<<"Ingrese el vector: ";
  for(int i=0;i<n;i++)
    cin>>arr[i];//captura el vector
  index=f(arr,n);//asigna el valor de retorno a index
  if(index<0)
    cout<<"No se encontraron elementos: indice = "<<index<<endl;
  else
    cout<<"El índice del primer elemento entre 0 y 10 es: "<<index<<endl;
}
