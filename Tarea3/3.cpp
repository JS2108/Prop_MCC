//ejercicio 3 rotación de bits
#include <iostream>
using namespace std;
#include "lqueue.h"
#include <math.h>

void rotacion_bits(int registro, int d,int lado){//registro, d=no. rotaciones y lado
  int reg_size=sizeof(d)*8;//tamaño del registro
  LQueue<bool> Q(reg_size);//lista ligada circular (cola cerrada)
  for(int i=0;i<=reg_size-1;i++){//llena la cola con los bits de registro
  if(registro>=(unsigned int)pow(2,reg_size-1-i)){
    Q.enqueue(true);
    registro-=pow(2,reg_size-1-i);}
  else
    Q.enqueue(false);}
  Q.print();
  for(int i=0;i<d;i++){//número de veces que se rota
    if(lado==1) Q.right_roll();//si lado==1 rota a la derecha
    else{
      if(lado==0) Q.left_roll();}Q.print();}//si lado==0 rota a la izquierda
  Q.print();
}

int main(){
  int a=0x1;
  rotacion_bits(a,10,1);//rota "a" 10 veces a la derecha
  rotacion_bits(a,10,0);//rota "a" 10 veces a la izquerda
}

/*
void left_roll(){
  rear=front;                         //rear ahora es front (el primero ahora es ultimo)
  front=front->next;                  //front ahora es el segundo
}
void right_roll(){                    //rotacion derecha
  Link<Elem>* temp=front->next;       //apuntador temporal
  while(temp->next!=rear){            //lleva el puntero al penultimo elemento
    temp=temp->next;}                 //apunta al penultimo elemento
  front=rear;                         //rear ahora es el primer elemento
  rear=temp;                          //front ahora es el penúltimo elemento
}
*/
