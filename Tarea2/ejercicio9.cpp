#include <iostream>
using namespace std;

int n=0;
void f(){
  n++;
  cout<<"Número de veces que se ha llamado: ";
  cout<<n<<endl;
}

int main(){
  cout<<"Ingrese el número de veces a llamar: ";
  int m;
  cin>>m;
  for(int i=0;i<m;i++) f();
}
