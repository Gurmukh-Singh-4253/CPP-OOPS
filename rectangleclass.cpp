#include <iostream>
using namespace std;

class Rectangle{
  float length, bredth;
public:
  Rectangle(){
    length = 0;
    bredth = 0;
  }
  Rectangle(float f){
    length = f;
    bredth = f;
  }
  Rectangle(float l, float b){
    length = l;
    bredth = b;
  }
  float area(){
    return length*bredth;
  }
};

int main(){
  Rectangle nopar;
  Rectangle onepar(5);
  Rectangle twopar(5,10);
  cout<<nopar.area()<<endl;
  cout<<onepar.area()<<endl;
  cout<<twopar.area()<<endl;
}
