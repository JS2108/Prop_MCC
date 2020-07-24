//tarea 3 ej 2.a) funcion para obtener preorden
#include <iostream>
using namespace std;

void preord(string inorden,string preorden,string &postorden){
  char root=preorden[0];//[0] es la raíz de inorden
  postorden=root+postorden;//concantena la raíz al inicio de postorden
  int llen=inorden.find(root);//longitud del lado izquierdo
  if(root){//si hay una raíz válida sigue al lado izquierdo y derecho
    preord(inorden.substr(inorden.find(root)+1),preorden.substr(llen+1),postorden);
    preord(inorden.substr(0,inorden.find(root)),preorden.substr(1,llen),postorden);}
}

int main(){
  string preorden;//"GEAIBMCLDFKJH" (Root Left Right)
  string inorden;//"IABEGLDCFMKHJ"; (Left Root Right)
  string postorden;
  cout<<"Ingrese el preorden: ";cin>>preorden;
  cout<<"Ingrese el inorden: ";cin>>inorden;
  preord(inorden,preorden,postorden);
  cout<<"El postorden es: "<<postorden<<endl;
  return 0;
}
