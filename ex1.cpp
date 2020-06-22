//ejercicio 1

#include <iostream>
using namespace std;
#include <string>

int n=10;//Tamaño de la lista
int arr_ctr=0;//contador de elementos de la lista

int swaper(int *ptr1, int *ptr2){//Funcion swap usando punteros
  int temp;
  if(*ptr2<*ptr1){
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;}
  return 0;}

/*int printer(int *ptr_p){//Imprime desde el puntero &ints[0]
  for(int i=0;i<n;i++){
    cout<<*(ptr_p+i)<<" ";}
  cout<<endl;
  return 0;}*/
int printer(int *ptr_p){//Imprime desde el puntero &ints[0]
  for(int i=0;i<arr_ctr;i++){
    cout<<*(ptr_p+n-arr_ctr+i)<<" ";}
  cout<<endl;
  return 0;}

int counter(int *ptr_ctr,int x){//Cuenta el numero de elementos x
  int count;
  for(int i=0;i<n;i++){
    if(*(ptr_ctr+i)==x)count++;}
  return count;}

int sorter(int *ptr_a){ //Bubble sort con puntero &ints[0]
  for(int i=n-2;i>=0;i--){
    for(int j=i;j<=n-2;j++){
      if(*(ptr_a+j+1)<*(ptr_a+j))swaper(ptr_a+j,ptr_a+j+1);}}
  return 0;}

  int earser(int *ptr_e, int a, int b){//Encuentra a y lo borra b veces
    for(int j=0;j<b;j++){
      for(int i=0;i<n;i++){
        if(*(ptr_e+i)==a){
          *(ptr_e+i)=0;
          arr_ctr--;
          sorter(ptr_e);break;}}}
    return 0;}

int main(){
  int ints[n];//array para la lista de enteros
//  int arr_ctr=0;//contador de elementos de la lista
  int input,option;
  int *ptr;//puntero principal
  ptr=&ints[0];
  string text="\nIngrese una acción: \n"
                  "1. Agregar un entero\n"
                  "2. Mostrar lista de enteros\n"
                  "3. Eliminar el primer entero con un valor dado\n"
                  "4. Eliminar todos los enteros con un valor dado\n"
                  "5. Salir\n\n";
  do{
    cout<<text;//imprime menu
    cin>>option;
    switch(option){
      case 1: cin>>input;//si hay menos de n elementos, agrega la entrada en ints[0]
              if(arr_ctr<n){ints[0]=input;arr_ctr++;printer(ptr);sorter(ptr);printer(ptr);break;}
              else {cout<<"\nLista llena, presione Enter para continuar\n";
                system("read"); break;}
      case 2: cout<<"\nSu lista es: "; printer(ptr);//muestra la lista
              cout<<"\nPresione Enter para continuar\n"; system("read"); break;
      case 3: cin>>input; //elimina el primer numero de la lista que indica la entrada
              earser(ptr,input,1);sorter(ptr);break;
      case 4: cin>>input; earser(ptr,input,n); sorter(ptr);break;//elimina todo numero indicado
      default: if(option!=5)cout<<"\nOpcion no valida\n\n";}}
  while(option!=5);
}
