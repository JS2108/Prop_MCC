//Ejercicio 1.1 utilizando lista ligada
#include <iostream>
using namespace std;
#include "llist.h"

void acentos(LList<char> *L1);
void simbolos(LList<char> *L1);
bool pal(LList<char> *L1);


int main(){
  string input= new input;//variable para los datos de entrada
  LList<char> L, *ptr;//crea la lista L y su puntero
  ptr=&L;//asigna el puntero
  cout<<"Ingrese un texto para comprobar si es palindromo: ";
  getline(cin,input);//captura el texto de entrada
  for(int i=0;i<input.length();i++)//se añade el texto a la lista
    L.append(input[i]);
  pal(ptr) ? cout<<"Es un palindromo \n" : cout<<"No es un palindromo\n";
  //operador ternario, si el retorno de la función
  //es verdadero entonces el texto es palindromo
}

void acentos(LList<char> *L1){//función para quitar acentos de vocales
  for(int i=0;i<L1->Length();i++){//recorre la lista
    char t1,t2;//los caracteres ascii extendidos tienen dos chars negativos
    L1->setPos(i); L1->getValue(t1);//lee el valor del elemento i
    if(t1==-61){//para el caso de las vocales acentuadas, -61 es el primero
      L1->next(); L1->getValue(t2);//lee i+1 (el segundo char)
      switch(t2){//switch para el segundo char de ascii extendido
      case  -95: L1->prev();L1->remove(t1);L1->insert('a'); break;//á(-61,-95)
      case -127: L1->prev();L1->remove(t1);L1->insert('A'); break;//Á(-61,-127)
      case  -87: L1->prev();L1->remove(t1);L1->insert('e'); break;//é(-61,-87)
      case -119: L1->prev();L1->remove(t1);L1->insert('E'); break;//É(-61,-119)
      case  -83: L1->prev();L1->remove(t1);L1->insert('i'); break;//í(-61,-83)
      case -115: L1->prev();L1->remove(t1);L1->insert('I'); break;//Í(-61,-115)
      case  -77: L1->prev();L1->remove(t1);L1->insert('o'); break;//ó(-61,-77)
      case -109: L1->prev();L1->remove(t1);L1->insert('O'); break;//Ó(-61,-109)
      case  -70: L1->prev();L1->remove(t1);L1->insert('u'); break;//ú(-61,-70)
      case -102: L1->prev();L1->remove(t1);L1->insert('U'); break;//Ó(-61,-102)
    }}}
}

void simbolos(LList<char> *L1){//función para quitar símbolos
  acentos(L1);//antes de quitar los símbolos, primero elimina los acentos
  char t1;//variable para evaluar caracteres
  int len=L1->Length();//tamaño de la lista
  L1->setStart();//mueve fence al inicio
  for(int i=0;i<len;i++){//recorre la lista
    L1->getValue(t1);//lee el valor frente a fence
    if(!((t1>64 && t1<91) ||//las letras minusculas ascii estan entre 64 y 91
      (t1>96 && t1<123)))//las letras mayusculas estan entre 96 y 123
      L1->remove(t1);//si el caracter no está en esos intervalos, se elimina
    else
      L1->next();}//si cumple con la condición, pasa al siguiente elemento de L
}

bool pal(LList<char> *L1){//función para verificar si el texto es palindromo
  simbolos(L1);//llama a la función que elimina los símbolos
  bool v;//variable de retorno
  char t1,t2;//variables para comparar si el texto es palindromo
  int len=L1->Length();//tamaño de la lista
  for(int i=0;i<len;i++){//recorre la lista
    L1->setPos(i);L1->getValue(t1);//lee el elemento i de la lista
    L1->setPos(len-i-1);L1->getValue(t2);//lee el elemento ~i de la lista
    if((t1<91 && t2>96 && t1==t2-32) ||//las minusculas y mayusculas en
       (t1>96 && t2<91 && t2==t1-32) ||//valores ascii tienen 32 elementos
       (t1==t2))//de diferencia, así sabemos si a=A, etc
       v=true;//si para toda la lista i=~i entonces la lista es un palindromo
    else{
      v=false;break;}//si al menos una elemento i != ~i entonces no es palindromo
  }
  L1->print();//imprime el texto sin acentos ni simbolos
  return v;//retorna el valor booleano
}
