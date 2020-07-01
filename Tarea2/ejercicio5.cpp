#include <iostream>
using namespace std;

bool f(int a){
  if(a<=1) return false;
  else{
    for(int i=2;i<a;i++)
      if(a%i==0) return false;
    return true;
  }
}

int main(){
  int input;
  cout<<"Ingrese un número para saber si es primo: ";
  cin>>input;
  if(f(input))cout<<"Su número es primo"<<endl;
  else cout<<"Su número no es primo"<<endl;
}
