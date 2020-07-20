//ejercicio 3 rotación de bits
#include <iostream>
using namespace std;
#include "lqueue.h"
#include <math.h>

void int_to_bits(LQueue<bool> &Q,int registro, int reg_size){
  for(int i=0;i<=reg_size-1;i++){//llena la cola con los bits de registro
    if(registro>=(unsigned int)pow(2,reg_size-1-i)){
      Q.enqueue(true);
      registro-=(unsigned int)pow(2,reg_size-1-i);}
    else
      Q.enqueue(false);}
  }

void bits_to_int(LQueue<bool> &Q,int &registro, int reg_size){
  bool temp;
  unsigned int t_reg;
  for(int i=reg_size-1;i>=0;i--){//llena la cola con los bits de registro
    Q.dequeue(temp);
    if(temp==true)
      t_reg+=pow(2,i);}
  registro=int(t_reg);
}

void rotacion_bits(int &registro, int d,bool lado){
  cout<<"Registro decimal inicial: "<<registro<<endl;
  int reg_size=sizeof(d)*8;
  LQueue<bool> Q(reg_size);
  int_to_bits(Q,registro,reg_size);
  for(int i=0;i<d;i++){             //número de veces que se rota
    if(lado==1) Q.right_roll();     //si lado==1 rota a la derecha
    else{
      if(lado==0) Q.left_roll();}}  //si lado==0 rota a la izquierda
  bits_to_int(Q,registro,reg_size);
  cout<<"Registro decimal rotado: "<<registro<<endl;
}

int main(){
  int a=0x8;
  rotacion_bits(a,2,0);
}

/*
void left_roll(){                     //rotacion izquierda
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
