#include <iostream>
#include <cmath>
using namespace std;

struct point{
  double x;
  double y;
};

int main(){

  point a,b;
  double d_x,d_y,d;

  cout<<"Ingrese las coordenadas del punto A: ";
  cin>>a.x>>a.y;
  cout<<"Ingrese las coordenadas del punto B: ";
  cin>>b.x>>b.y;
  d_x=b.x-a.x;//delta x
  d_y=b.y-a.y;//delta y
  d=sqrt((d_x*d_x)+(d_y*d_y));

  cout<<d<<endl;
}
