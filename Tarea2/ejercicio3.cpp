#include <iostream>
using namespace std;

int main(){
  int n,m,*ptr,sum;
  cout<<"Ingrese el número de filas: ";
  cin>>n;
  cout<<"Ingrese el número de columnas: ";
  cin>>m;
  int a[n][m];

  for(int i=0;i<n;i++){
    cout<<"Ingrese la fila "<<i+1<<": ";
    for(int j=0;j<m;j++){
      cin>>a[i][j];}}

  ptr=&a[0][0];
  for(int i=0;i<n*m;i++)
    sum+=*(ptr+i);

  cout<<sum<<endl;
}
