//Ejercicio 1.2 con array list
#include <iostream>
using namespace std;
#include "alist.h"
#include "text_alist.h"

int main(){
  string input;//variable para los datos de entrada
  cout<<"Ingrese un texto para comprobar si es palindromo: ";
  getline(cin,input);//captura el texto de entrada
  AList<char> L(input.length()), *ptr;//crea la lista L y su puntero
  ptr=&L;//asigna el puntero
  for(int i=0;i<input.length();i++)//se añade el texto a la lista
    L.append(input[i]);
  pal(ptr) ? cout<<"Es un palindromo \n" : cout<<"No es un palindromo\n";
  //operador ternario, si el retorno de la función
  //es verdadero entonces el texto es palindromo
}
