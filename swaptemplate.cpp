#include <iostream>
using namespace std;

template <typename T>
void Swap(T *x, T *y){
  T temp = *x; 
  *x = *y; 
  *y = temp;
}

int main(){
  int x,y;
  x = 100; 
  y = 200; 
  Swap(&x,&y);
  cout<<"x:"<<x<<endl<<"y:"<<y<<endl;
}
