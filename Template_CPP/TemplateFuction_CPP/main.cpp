#include <iostream>
using namespace std;

template <class Tipo>
Tipo media(Tipo a, Tipo b){
  Tipo resultado;
  resultado = (a+b)/2;
  return (resultado);
}

int main(){
  int ix, iy;
  float fx, fy;
  double dx, dy;
  
  ix = 3; iy = 4;
  fx = 3; fy = 4;
  dx = 3; dy = 4;
 
  cout << "Media de Inteiros: " << media<int>(ix,iy) << "\n";
  cout << "Media de Float: " << media<float>(fx,fy) << "\n";
  cout << "Media de Double: " << media<double>(dx,dy) << "\n";
}
