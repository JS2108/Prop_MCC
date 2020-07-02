//ejercicio 1
#include <iostream>
using namespace std;

void minmax(int a[], int n, int *mi, int *mx){
  for(int i=0;i<n;i++){//recorre a[]
    if(a[i]>*mx)*mx=a[i];//asigna el máximo
    if(a[i]<*mi)*mi=a[i];//asigna el mínimo
  }
}

int main(){
  int n;
  cout<<"Ingrese el tamaño del array: ";
  cin>>n;
  int arr[n],min,max;
  cout<<"Ingrese los elementos del array: ";
  for(int i=0;i<n;i++)cin>>arr[i];//captura el vector
  min=arr[0];max=arr[0];
  minmax(arr,n,&min,&max);//encuentra min y max
  cout<<"Mínimo: "<<min<<" Máximo: "<<max<<endl;
}
