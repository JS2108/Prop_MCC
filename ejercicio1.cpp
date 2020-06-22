//ejercicio 1

#include <iostream>
using namespace std;
#include <string>

int main(){
  int n=10;//Tamaño de la lista
  int arr_ctr=0;//Contador de elementos de la lista
  int ints[n];//Array para la lista
  int input,option;
  string text="\nIngrese una acción: \n"
                  "1. Agregar un entero\n"
                  "2. Mostrar lista de enteros\n"
                  "3. Eliminar el primer entero con un valor dado\n"
                  "4. Eliminar todos los enteros con un valor dado\n"
                  "5. Salir\n\n";
  do{
    cout<<text;//Imprime menu
    cin>>option;
    switch(option){
      case 1: cin>>input;//Agregar entero
              if(arr_ctr<n){
                ints[0]=input; arr_ctr++;
                for(int i=n-2;i>=0;i--){//----------Ordenar---|
                  for(int j=i;j<=n-2;j++){
                    if(ints[j+1]<ints[j]){
                      int temp;//-------------------Swap------|
                      if(ints[j+1]<ints[j]){
                        temp=ints[j];
                        ints[j]=ints[j+1];
                        ints[j+1]=temp;}}}}break;}//----------|
                else{ cout<<"\nLista llena, presione Enter para continuar\n";
                      system("read");break;}
      case 2: cout<<"\nSu lista es: ";//Imprimir lista
              for(int i=0;i<arr_ctr;i++){
                cout<<ints[n-arr_ctr+i]<<" ";}
              cout<<"\nPresione Enter para continuar\n"; system("read");break;
      case 3: cin>>input;//Borra el primer elemento que coincida con "input"
              for(int i=0;i<n;i++){//---------------Borrar-------|
                if(ints[i]==input){
                  ints[i]=0;
                  arr_ctr--;
                  for(int j=n-2;j>=0;j--){//--------Ordenar---|
                    for(int k=j;k<=n-2;k++){
                      if(ints[k+1]<ints[k]){
                        int temp;//-----------------Swap------|
                        if(ints[k+1]<ints[k]){
                          temp=ints[k];
                          ints[k]=ints[k+1];
                          ints[k+1]=temp;}}}}
                break;}}//---------------------------------------|
              break;
      case 4: cin>>input;
              for(int p=0;p<n;p++){//Borra todo elemento "input" "p" veces
                for(int i=0;i<n;i++){//-------------Borrar-------|
                  if(ints[i]==input){
                    ints[i]=0;
                    arr_ctr--;
                    for(int j=n-2;j>=0;j--){//------Ordenar---|
                      for(int k=j;k<=n-2;k++){
                        if(ints[k+1]<ints[k]){
                          int temp;//---------------Swap------|
                          if(ints[k+1]<ints[k]){
                            temp=ints[k];
                            ints[k]=ints[k+1];
                            ints[k+1]=temp;}}}}
                  break;}}}//------------------------------------|
              break;
      default: if(option!=5)cout<<"\nOpcion no valida\n";}}
  while(option!=5);
}
