#include <iostream>
using namespace std;

void minmax(int a[], int n, int *mi, int *mx){
  for(int i=0;i<n;i++){
    if(a[i]>*mx)*mx=a[i];
    if(a[i]<*mi)*mi=a[i];
  }
}

int main(){
  int n;
  cout<<"Ingrese el tamaño del array: ";
  cin>>n;
  int arr[n],min,max;
  cout<<"Ingrese los elementos del array: ";
  for(int i=0;i<n;i++)cin>>arr[i];
  min=arr[0];max=arr[0];
  minmax(arr,n,&min,&max);
  cout<<"Mínimo: "<<min<<" Máximo: "<<max<<endl;
}
