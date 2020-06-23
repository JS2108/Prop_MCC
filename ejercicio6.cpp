//ejercicio 6 triangulo de pascal
#include <iostream>
using namespace std;

int main(){

  int d;
  cout<<"Ingrese la linea deseada: ";
  cin>>d;
  double a[d],b[d];//2 arrays, uno temporal y uno final
  double m;
  for(int i=1;i<d+1;i++){
    m=i/2;//m es la mitad de la linea
    if(i==1){//si d=1 la linea es 1
      a[0]=1; b[0]=1;}
    else{
      if(i==2){//si d=2 la linea es 11
        a[0]=1;b[0]=1;
        a[1]=1;b[1]=1;}
      else{
        for(int j=0;j<=m;j++){//itera hasta la mitad de la linea
          if(j==0)a[0]=1;//el primer elemento de la linea siempre es 1
          else a[j]=b[j]+b[j-1];}//hace las sumas desde el vector temporal (linea anterior)

        for(int j=m+1;j<i;j++)//copia los valores repetidos al resto de la linea
          a[j]=a[i-j-1];

        for(int j=0;j<d;j++)b[j]=a[j];}}}//actualiza el vector temporal

  for(int x=0;x<d;x++)cout<<a[x]<<" ";cout<<endl;//imprime la linea
}
