//exercise 1

#include <iostream>
using namespace std;
#include <string>

int n=10;//Tamaño de la lista

int swaper(int *ptr1, int *ptr2){//Funcion swap usando punteros
  int temp;
  if(*ptr2<*ptr1){
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;}
  return 0;}

int printer(int *ptr_p){//Imprime desde el puntero &ints[0]
  for(int i=0;i<n;i++){
    cout<<*(ptr_p+i)<<" ";}
  cout<<endl;
  return 0;}

int finder(int *ptr_f, int x){//Encuentra el numero de elementos x
  int ind;
  for(int i=0;i<n;i++){
    if(*(ptr_f+i)==x){
      ind=i;break;}}
  return ind;}

int counter(int *ptr_ctr,int x){//Cuenta el numero de elementos x
  int count;
  for(int i=0;i<n;i++){
    if(*(ptr_ctr+i)==x)count++;}
  return count;}

int sorter(int *ptr_a){ //Bubble sort con puntero &ints[0]
  for(int i=n-2;i>=0;i--){
    for(int j=i;j<=n-2;j++){
      if(*(ptr_a+j+1)<*(ptr_a+j))swaper(ptr_a+j,ptr_a+j+1);}}
  printer(ptr_a);
  return 0;}

int main(){
  int ints[n];
  int arr_ctr=0;
  int input,option;
  int *ptr;
  ptr=&ints[0];
  string text="Ingrese una acción: \n"
                  "1. Agregar un entero\n"
                  "2. Mostrar lista de enteros\n"
                  "3. Eliminar el primer entero con un valor dado\n"
                  "4. Eliminar todos los enteros con un valor dado\n"
                  "5. Salir\n";
  do{
    cout<<text;//Menu
    cin>>option;//opcion
    switch(option){
      case 1: cin>>input;
              if(arr_ctr<n){ints[0]=input;printer(ptr);arr_ctr++;sorter(ptr);break;}
              else {cout<<"\nLista llena, presione Enter para continuar\n";
                system("read"); break;}
      case 2: cout<<"\nSu lista es: "; printer(ptr);
              cout<<"\nPresione Enter para continuar\n"; system("read"); break;
      case 3: cin>>input; ints[finder(ptr,input)]=0;sorter(ptr);arr_ctr--;break;
      case 4: cin>>input; for(int i=0;i<counter(ptr,input);i++){
                            for(int j=0;j<n;j++){ints[finder(ptr,input)]=0;}
                            arr_ctr--;}
                          sorter(ptr);break;}
      other: if(option!=5) cout<<"\nOpción no válida\n\n";}
  while(option!=5);}
