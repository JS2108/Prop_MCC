//ejercicio 3 rotación de bits
#include <iostream>
using namespace std;
#include "lqueue.h"
#include <math.h>

void rotacion_bits(int registro, int d,int lado){
  int reg_size=sizeof(d)*8;//tamaño del registro
  LQueue<bool> Q(reg_size);//lista ligada circular (cola cerrada)
  for(int i=0;i<=reg_size-1;i++){//llena la cola con los bits de registro
  if(registro>=(unsigned int)pow(2,reg_size-1-i)){
    Q.enqueue(true);
    registro-=(unsigned int)pow(2,reg_size-1-i);}
  else
    Q.enqueue(false);}
  Q.print();
  for(int i=0;i<d;i++){//número de veces que se rota
    if(lado==1) Q.right_roll();//si lado==1 rota a la derecha
    else{
      if(lado==0) Q.left_roll();}}//si lado==0 rota a la izquierda
  Q.print();
}

int main(){
  int a=0x88A87888;
  rotacion_bits(a,5,1);//rota "a" 5 veces a la derecha
  cout<<endl;
  rotacion_bits(a,5,0);//rota "a" 5 veces a la izquerda
}

/*
void left_roll(){
  rear=front;                         //rear=front (el ultimo pasa a ser el primero)
  front=front->next;                  //front ahora es el segundo
}
void right_roll(){                    //rotacion derecha
  Link<Elem>* temp=front->next;       //apuntador temporal
  while(temp->next!=rear){            //lleva el puntero al penultimo elemento
    temp=temp->next;}
  front=rear;                         //el primero pasa a ser el ultimo
  rear=temp;                          //el ultimo pasa a ser el penultimo
}
*/
